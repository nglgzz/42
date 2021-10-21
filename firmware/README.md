# [42 Keyboard](../README.md) – Firmware

The firmware for this keyboard is also located in the
[QMK repository](https://github.com/qmk/qmk_firmware/tree/master/keyboards/handwired/42).
If you're building it from there (or using other QMK tools), the keyboard is
called `handwired/42`.

## Build

To build and load the firmware into your board, cd into this directory and run:

```
make init
make build
```

The firmware is built for the Elite-C controller. It should work with the Pro
Micro too with no need for changes (I haven't tested though).

## Keymap

The keymap can be adapted in `keymaps/default/keymap.c`, and a legend can be
found on [KeyboardLayoutEditor](https://www.keyboard-layout-editor.com/#/gists/bdcb70e56b88022d86f30f0957648d67).

How to read the labels (L = layer):

```
  /--------------\
  │L0          L1│
  │   L1+Shift L2│
  │L0+Shift    L3│
  \--------------/
   \ dual  role /
```

- L0 – default layer
- L1 – numbers, symbols, F keys
- L2 – navigation and media keys
- L3 – mouse controls
- Dual role: use L0 when tapped quickly, use the value on the front label when kept pressed or used as a modifier

## Useful Resources

[../build/resources.md](../build/resources.md#firmware)
