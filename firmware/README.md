## 42 keyboard firware

### Build

To build and load the firmware into your board, cd into this directory and run:

```
make all
```

The firmware is built for the atmega32u4 controller (I'm using Feather 32u4 from
Adafruit), and avrdude is required to load the firmware.

### Keymap

The keymap can be adapted in `keymaps/default/keymap.c`, and a legend can be found on [KeyboardLayoutEditor](http://www.keyboard-layout-editor.com/#/gists/bdcb70e56b88022d86f30f0957648d67).

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
