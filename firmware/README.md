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

The firmware is built for the Proton C controller. With some changes it might
work with the Pro Micro as well.

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

## Troubleshooting

```
cc: error: unrecognized command line option ‘-mno-thumb-interwork’
cc: error: unrecognized command line option ‘-mthumb’
```

Check your ARM compiler version:

```
$ arm-none-eabi-gcc --version
arm-none-eabi-gcc (Arch Repository) 9.3.0
Copyright (C) 2019 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

If it's 9.x.x you have to install an older version (8.3.x should work).
Then you can call the build command with the path to the compiler's binary.

```
$ make build CC=/opt/gcc-arm-none-eabi-8-2019-q3-update/bin/arm-none-eabi-gcc
```

On Arch you can simply install [gcc-arm-none-eabi-bin-83](https://aur.archlinux.org/packages/gcc-arm-none-eabi-bin-83/) <sup>AUR</sup>
and run:

```
$ make build-arch
```

## Useful Resources

[../build/resources.md](../build/resources.md#firmware)
