## 42 keyboard PCB
Here you'll find both the gerber files, for producing a PCB for this keyboard,
and the kicad project for making changes to the circuit.

### Components list
- 1x Teensy 2.0
- 42x 1N4148 diodes
- 42x Cherry Mx switches
- 3x Amphenol 12401548e4-2a (USB C receptacles)

### Notes
Communication between the two sides of the keyboard is achieved with a USB C
cable. I initially thought to use an I/O expander, or something similar, but
this is a much simpler solution.

### Useful resources
- [Keyboard PCB Guide](https://github.com/ruiqimao/keyboard-pcb-guide)

