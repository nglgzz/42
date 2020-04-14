# [42 Keyboard](../README.md) – [Build](./README.md) – Resources

Here is a list of the resources I found most useful while designing and building
the keyboard.

## General

- [/r/MechanicalKeyboards Wiki](https://www.reddit.com/r/MechanicalKeyboards/wiki/customkeyboards) –
  The most complete keyboard wiki I found so far. Most links in this list are there too.

## Firmware

- [QMK Docs](https://docs.qmk.fm/#/) –
  Guides and documentation for configuring the QMK firmware for your keyboard.
  The content is easy to follow and they cover most use cases.

- [QMK Firmware](https://github.com/qmk/qmk_firmware/) –
  If something wasn't in the docs, or it was not clear, reading code from other
  keyboards helped understanding it. Clone the repository locally and search the
  codebase for keywords if you want to see examples. Just keep in mind not all
  keyboards are up to date.

- [How to Connect an MCP23017 I/O Port Expander to an Arduino](http://www.learningaboutelectronics.com/Articles/MCP23017-IO-port-expander-circuit-with-arduino.php) | [Adding an MCP23017 I/O Extender to Arduino](https://www.instructables.com/id/Adding-an-MCP23017-IO-Extender-to-Arduino-or-ESP82/) –
  I had these two posts open at all times when writing and testing the firmware.
  The first one explains how to wire the IO expander, while the second one
  explains the code better.

- [How to make a keyboard: The Matrix](http://blog.komar.be/how-to-make-a-keyboard-the-matrix/) –
  Explains starting from basic electronics concepts, how a keyboard matrix
  works. It's a fascinating read even though in most cases you don't need to
  know this.

- [Testing and Debugging QMK](https://beta.docs.qmk.fm/tutorial/newbs_testing_debugging#debugging-with-hid_listen) –
  Useful to know what's going on in the firmware if you're actually touching the
  firmware code.

## PCB

- [A modern handwiring guide](https://geekhack.org/index.php?topic=87689.0) –
  It helps understanding how a keyboard is wired. Useful even if you end up
  designing a PCB.

- [Keyboard PCB Guide](https://github.com/ruiqimao/keyboard-pcb-guide) –
  A step-by-step guide on designing a PCB using Kicad. You might need to search for
  some things that are not covered here (eg. how to create a footprint), but the
  basics are all covered.

- [daprice/keyswitches.pretty](https://github.com/daprice/keyswitches.pretty) –
  Not a learning resource. Footprint library for Kailh hot-swap sockets.

- [qmk/qmk_hardware](https://github.com/qmk/qmk_hardware) –
  Also not a learning resource. Footprint and symbols library for the Proton-C
  controller.

- [Why split keyboards don't use USB](https://www.reddit.com/r/MechanicalKeyboards/comments/a641ls/split_keyboard_trrs_shorting_and_protection/ebryvx5) –
  In-depth explanation why TRRS has become the standard for split keyboards. I
  wish I have read this before going with USB-C on my first keyboard.

## Case

- [Fusion 360 Tutorial for Absolute Beginners](https://www.youtube.com/watch?v=A5bc9c3S12g) –
  I spent a long time trying to design the enclosure with awkward-to-use tools.
  Until I found and instantly fell in love with Fusion 360. Once you learn the
  basics, you'll see how incredibly intuitive yet powerful this software is.

## Help

- [/r/MechanicalKeyboards](https://www.reddit.com/r/MechanicalKeyboards/) –
  Many of my Google searches ended up on threads from this subreddit. If you get
  stuck, this seems like a great place to ask.

- [QMK Discord Server](https://discord.gg/Uq7gcHh) –
  I had no idea if what I wanted to achieve was supported in QMK and the QMK
  devs pointed me in the right direction here. They also have some channels for
  more entry level questions in case you get stuck while following their
  documentation.

## Disclaimer

I'm in no way affiliated with any of the resources mentioned here.
