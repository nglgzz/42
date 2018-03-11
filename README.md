# 42
42 is a 42-keys split orthogonal keyboard. In this repo you can find all files
necessary to build and configure one yourself.

## Structure
You can find the source code for building the firmware and customizing the
layout in the `firmware` folder.

In the `pcb` folder there are files for producing or changing the circuit board.

For laser cutting the case, you can go in the `case` folder and you'll find the
files in both DXF and SVG formats.

## Useful resources
- [A modern handwiring guide](https://geekhack.org/index.php?topic=87689.0)
I didn't end up putting into practice what's written in this guide, but it has
been super helpful for understanding how things are connected in a keyboard.
- [How to build your very own keyboard firmware](https://deskthority.net/workshop-f7/how-to-build-your-very-own-keyboard-firmware-t7177.html)
This guide is really all you need if you're going to make your own firmware.
If you want some special functions that are not described there, you can check
TMK docs and you'll probably find what you're looking for.
- [Keyboard PCB Guide](https://github.com/ruiqimao/keyboard-pcb-guide)
Here you can find most of what you need to know for designing a PCB. You might
need to search for some things that are not covered there, like how to create a
footprint for a component that is not present in any library. The basics are
all covered though.

