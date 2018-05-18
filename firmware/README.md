## 42 keyboard firware
### Build
Clone this repository, move to this folder, and run:

```
make all
```

You might need to first change the MCU value on the Makefile if you're not
building for the Teensy 2.0.

After building you can load the firmware into the controller using
[teensy_loader_cli](https://github.com/PaulStoffregen/teensy_loader_cli) and
running:

```
teensy_loader_cli --mcu atmega32u4 42.hex
```

### Pinout
The pinout can be changed in the `matrix.c` file. The current pinout is the
following:

```
column:  0   1   2   3   4   5   6   7   8   9   10  11
pin   :  b0  b1  b2  b3  b4  b5  f0  f1  f4  f5  f6  f7

row:  0   1   2   3
pin:  d0  d1  d2  d3
```

### Keymap
The keymap can be adapted in `keymap_42.c`, and can also be found on [KLE](http://www.keyboard-layout-editor.com/#/gists/bdcb70e56b88022d86f30f0957648d67).
The current layout has the following layers.

How to read the labels:

```
  /--------------\
  |L0          L1|
  |   L1+Shift L2|
  |L0+Shift    L3|
  \--------------/
      Dual role
```

- L0: default layer
- L1: numbers, symbols, F keys
- L2: navigation and media keys
- L3: mouse controls
- Dual role: use L0 when tapped quickly, use the value on the front label when kept pressed and used as a modifier


### Useful Resources
- [How to build your very own keyboard firmware](https://deskthority.net/workshop-f7/how-to-build-your-very-own-keyboard-firmware-t7177.html)
