QMK_PATH := ~/qmk_firmware
KEYBOARD_PATH := $(QMK_PATH)/keyboards/handwired/42

all:
	if [ -d $(KEYBOARD_PATH) ]; then rm -r $(KEYBOARD_PATH); fi
	cp -r 42/ $(KEYBOARD_PATH)
	cd $(QMK_PATH) && make CC=/opt/gcc-arm-none-eabi-8-2019-q3-update/bin/arm-none-eabi-gcc handwired/42:default:flash

clean:
	rm -r $(KEYBOARD_PATH)
	cd $(QMK_PATH) && make clean
