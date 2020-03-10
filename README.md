# 42

42 is an ergonomic keyboard with the following features:

- 40% layout
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

**General:**

- [/r/MechanicalKeyboards/](https://www.reddit.com/r/MechanicalKeyboards/)
  A lot of my Google searches ended up on threads from this subreddit, the
  community seems super helpful, if you're stuck somewhere, this is probably the
  best place to ask.

**Firmware:**

- [QMK Docs](https://docs.qmk.fm/#/)
  Guides and documentation for making your own firmware using QMK.
- [QMK Discord Server](https://discord.gg/Uq7gcHh)
  If you get stuck somewhere while writing the firmware, this is the best place
  to ask for help.
- [QMK Firmware](https://github.com/qmk/qmk_firmware/)
  Another QMK link. I found it super helpful to search in the repository for
  keywords related to what I was doing and see how other keyboards were doing
  what I was trying to implement. Just keep in mind that not all keyboards are
  up to date.
- [How to Connect an MCP23017 I/O Port Expander to an Arduino](http://www.learningaboutelectronics.com/Articles/MCP23017-IO-port-expander-circuit-with-arduino.php)
  and [Adding an MCP23017 I/O Extender to Arduino or ESP8266](https://www.instructables.com/id/Adding-an-MCP23017-IO-Extender-to-Arduino-or-ESP82/)
  I went back a lot to these two posts when writing and testing the firmware,
  the first one explains really in detail how to connect the IO expander, while
  the second one goes more in detail into the code.
- [How to make a keyboard: The Matrix](http://blog.komar.be/how-to-make-a-keyboard-the-matrix/)
  Very in-depth article explaining, starting from the very basics, how a keyboard
  matrix works.

**PCB:**

- [A modern handwiring guide](https://geekhack.org/index.php?topic=87689.0)
  Even if you don't end up putting into practice what's written in this guide,
  it will definitely be helpful for understanding how things are connected in
  a keyboard.
- [Keyboard PCB Guide](https://github.com/ruiqimao/keyboard-pcb-guide)
  Here you can find most of what you need to know for designing a PCB. You might
  need to search for some things that are not covered there, like how to create a
  footprint for a component that is not present in any library. The basics are
  all covered though.
- [daprice/keyswitches.pretty](https://github.com/daprice/keyswitches.pretty)
  Footprints for Kailh hotswap sockets.
- [qmk/qmk_hardware](https://github.com/qmk/qmk_hardware)
  Footprints and symbols for the Proton-C.

**Case:**

- [Fusion 360 Tutorial for Absolute Beginners](https://www.youtube.com/watch?v=A5bc9c3S12g)

**Buying**

- [Mouser](https://mouser.com/)
  It has pretty much anything you could want in terms of electronics.
- [JLCPCB](http://jlcpcb.com/)
  PCB manufacturer, they have great prices and never had any problems with them.

## Previous Versions

- [V1:](https://github.com/nglgzz/42/tree/0dc9616868c737c60640ab4fd4d3102e0f5e5b27)
  PCB, Split, TMK firmware, USB C
- [V2:](https://github.com/nglgzz/42/tree/2f6b6f18f1d686f9e8ba3949876a61684ea18898)
  Handwired, QMK, Bluetooth
- [V3:](https://github.com/nglgzz/42/tree/8bee8c7db4633647ef54003a4253680ca5ff11d6)
  PCB, QMK, Bluetooth
