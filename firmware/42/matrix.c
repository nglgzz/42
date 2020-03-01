#include "quantum.h"
#include "matrix.h"
#include "i2c_master.h"
#include <print.h>
#include QMK_KEYBOARD_H

static const pin_t row_pins[LEFT_MATRIX_ROWS] = MATRIX_ROW_PINS;
static const pin_t col_pins[LEFT_MATRIX_COLS] = MATRIX_COL_PINS;

static void         init_mcp23017(void);
static void         init_pins(void);
static void         blink(uint8_t times);
static bool         read_cols_on_row(matrix_row_t current_matrix[], uint8_t current_row);
static void         select_row(uint8_t row);
static matrix_row_t read_cols(uint8_t row);

volatile i2c_status_t i2c_status      = I2C_STATUS_SUCCESS;
bool                  i2c_initialized = false;

void matrix_init_custom(void) {
    init_mcp23017();
    init_pins();

    if (i2c_status == I2C_STATUS_SUCCESS) {
        blink(1);
    } else {
        blink(2);
    }
}

bool matrix_scan_custom(matrix_row_t current_matrix[]) {
    bool matrix_has_changed = false;

    for (uint8_t current_row = 0; current_row < MATRIX_ROWS; current_row++) {
        matrix_has_changed |= read_cols_on_row(current_matrix, current_row);
    }

    return matrix_has_changed;
}

// ------- Matrix Init functions -----------

static void init_mcp23017(void) {
    if (!i2c_initialized) {
        i2c_init();
        wait_ms(200);
        i2c_initialized = true;
    }

    uint8_t allPinsOutput = 0x00;
    i2c_status            = i2c_writeReg(I2C_ADDRESS, I2C_IODIRA, &allPinsOutput, 1, 500);
    if (i2c_status) return;

    i2c_status = i2c_writeReg(I2C_ADDRESS, I2C_IODIRB, &allPinsOutput, 1, 500);
    if (i2c_status) return;

    uint8_t allColsHigh = I2C_MATRIX_COL_PINS;
    i2c_status          = i2c_writeCols(&allColsHigh);
    if (i2c_status) return;

    uint8_t allRowsHigh = I2C_MATRIX_ROW_PINS;
    i2c_status          = i2c_writeRows(&allRowsHigh);
}

static void init_pins(void) {
    uint8_t allRowsHigh = I2C_MATRIX_ROW_PINS;
    i2c_status          = i2c_writeRows(&allRowsHigh);

    uint8_t allColsHigh = I2C_MATRIX_COL_PINS;
    i2c_status          = i2c_writeCols(&allColsHigh);

    for (uint8_t row = 0; row < LEFT_MATRIX_ROWS; row++) {
        setPinInputHigh(row_pins[row]);
    }
    for (uint8_t col = 0; col < LEFT_MATRIX_COLS; col++) {
        setPinInputHigh(col_pins[col]);
    }
}

static void blink(uint8_t times) {
    setPinOutput(B8);

    for (uint8_t i = 0; i < times; i++) {
        writePinHigh(B8);
        wait_ms(150);

        writePinLow(B8);
        wait_ms(150);
    }
}

// ------- Matrix Scan functions -----------

static bool read_cols_on_row(matrix_row_t current_matrix[], uint8_t current_row) {
    // Store last value of row prior to reading.
    matrix_row_t last_row_value = current_matrix[current_row];

    // Clear data in matrix row.
    current_matrix[current_row] = 0;

    // Select row and wait for row selection to stabilize.
    select_row(current_row);
    wait_us(30);

    current_matrix[current_row] = read_cols(current_row);

    // No need to unselect row as the next `select_row` will blank everything.
    return (last_row_value != current_matrix[current_row]);
}

static void select_row(uint8_t row) {
    if (row < LEFT_MATRIX_ROWS) {
        for (uint8_t current_row = 0; current_row < LEFT_MATRIX_ROWS; current_row++) {
            if (current_row == row) {
                setPinOutput(row_pins[row]);
                writePinLow(row_pins[row]);
            } else {
                setPinInputHigh(row_pins[current_row]);
            }
        }
    } else if (row < LEFT_MATRIX_ROWS + RIGHT_MATRIX_ROWS) {
        // We assume row == pin.
        uint8_t pin = row - LEFT_MATRIX_ROWS;

        // Active low.
        uint8_t mask = ~(1 << pin);

        if (i2c_status == I2C_STATUS_SUCCESS) {
            uint8_t rowHigh = I2C_MATRIX_ROW_PINS & mask;
            i2c_status      = i2c_writeRows(&rowHigh);
        }
    }
}

static matrix_row_t read_cols(uint8_t row) {
    if (row < LEFT_MATRIX_ROWS) {
        uint8_t data = 0x00;
        for (uint8_t current_col = 0; current_col < LEFT_MATRIX_COLS; current_col++) {
            uint8_t pin_state = readPin(col_pins[current_col]);
            if (!pin_state) {
                // Switch is pressed.
                data |= (MATRIX_ROW_SHIFTER << current_col);
            }
        }
        return data;
    } else if (row < LEFT_MATRIX_ROWS + RIGHT_MATRIX_ROWS) {
        uint8_t data = 0xFF;
        if (i2c_status == I2C_STATUS_SUCCESS) {
            i2c_status = i2c_readCols(&data);

            // Invert reading because of active low, and mask to only mark used pins.
            return (~data) & I2C_MATRIX_COL_PINS;
        }
    }

    return 0;
}
