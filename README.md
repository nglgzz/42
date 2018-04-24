# 42
42 is a 42-keys split orthogonal keyboard. In this repo you can find all files
necessary to build and configure one yourself.

![42 keyboard](/42.jpeg)

## Structure
You can find the source code for building the firmware and customizing the
layout in the **firmware** folder.

In the **pcb** folder there are files for producing or changing the circuit board.

For laser cutting the case, you can go in the **case** folder and you'll find the
files in both DXF and SVG formats.

## Notes
At the moment the keyboard is not working. I need to fix the circuit where the
two sides of the keyboard are connected.

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
- [USB-C 3.1/2.0 wiring](https://en.wikipedia.org/wiki/USB-C#Cable_wiring)
Sigh.
- [Wiring diagram for USB-C to USB-A cable](https://electronics.stackexchange.com/questions/323128/wiring-diagram-for-usb-c-to-usb-a-cable/323135#323135?newreg=1b864805c8d8470593bccdc4ec9985a5)
I wish I saw this while designing the first version of the PCB, so I wouldn't
have messed up the connections. I'll leave this here if someone needs it.
- [/r/MechanicalKeyboards/](https://www.reddit.com/r/MechanicalKeyboards/)
A lot of my Google searches ended up on threads from this subreddit, the
community seems super helpful, if you're stuck somewhere, this is probably the
best place to ask.

