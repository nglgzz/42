# 42

42 is an ergonomic keyboard with the following features:

- 40% layout
- handwired
- orthogonal
- Bluetooth enabled

It uses the Feather 32u4 controller, and its layout is defined using the QMK
firmware. The case is made of four 3D printed pieces glued and screwed together.
In this repo you can find all files necessary to build and configure one yourself.

### Front

![keyboard front](/42.jpg?v3)

### PCB

![keyboard PCB](/42-pcb.jpg)
![keyboard PCB close up](/42-pcb-close-up.jpg)

## Useful resources

- [A modern handwiring guide](https://geekhack.org/index.php?topic=87689.0)
  Even if you don't end up putting into practice what's written in this guide,
  it will definitely be helpful for understanding how things are connected in
  a keyboard.
- [How to build your very own keyboard firmware](https://deskthority.net/workshop-f7/how-to-build-your-very-own-keyboard-firmware-t7177.html)
  This guide is really all you need if you're going to make your own firmware.
  If you want some special functions that are not described there, you can check
  TMK docs and you'll probably find what you're looking for.
- [Keyboard PCB Guide](https://github.com/ruiqimao/keyboard-pcb-guide)
  Here you can find most of what you need to know for designing a PCB. You might
  need to search for some things that are not covered there, like how to create a
  footprint for a component that is not present in any library. The basics are
  all covered though.
- [/r/MechanicalKeyboards/](https://www.reddit.com/r/MechanicalKeyboards/)
  A lot of my Google searches ended up on threads from this subreddit, the
  community seems super helpful, if you're stuck somewhere, this is probably the
  best place to ask.
- [Feather 32u4 Pinout](https://learn.adafruit.com/adafruit-feather-32u4-bluefruit-le/pinouts)
