# 42 Keyboard

40%, splittable, mechanical keyboard.

## IMPORTANT NOTE

**This iteration isn't working.** Well, it technically works, but it's a pain to
assemble, and the detachable mechanism didn't work out as well as I'd hoped.

The magnets aren't strong enough to keep the two sides connected, so unless
you're connecting the two sides with a cable at all times the keyboard is
unusable. Also there isn't much space to work with to switch to more powerful
magnets.

For now I'm shelving this concept, and might come back to it in the future. As
of now the best solution I can think of to fix the issues with this iteration
are to:

1. Always have the two sides connected with a cable. This is the easiest thing
   to do, but having two cables at all times to use the keyboard kind of defies
   the purpose of having it splittable.

2. Make both sides wireless. Last time I checked this seemed very complicated,
   especially if you want a reasonable battery life. You need one main side
   communicating with the computer and one secondary side that communicates with
   the main one.

3. A mix of option 1 and 2. This is probably the option that gives the best
   result for the least effort. Have one cable to connect the two sides and then
   have one of the two connect to the PC via Bluetooth. Need to look more into
   how to get good battery life though. Not sure if it was QMK or the Feather
   BLE, but when I tried using Bluetooth the keyboard would only get through a
   day or two with a 600 mAh battery, which was quite disappointing.

## Project Structure

- [Build](./build/README.md) – Build log, bill of materials, tips on where to
  source parts, assembling tips, learning resources I used while designing this
  keyboard.

- [Case](./case/README.md) – Fusion 360 project and STL files for 3D printing
  the enclosure.

- [Firmware](./firmware/README.md) – QMK configuration. There is a Makefile to
  build and load the firmware.

- [PCB](./pcb/README.md) – Kicad project and Gerber files for manufacturing the
  circuit board.

## Why?

In January 2018 I wanted a keyboard with a specific set of features. The
simplest options to get that keyboard were to wait for a group-buy or build my
own. Waiting time and costs for both options seemed similar, so I went with the
option where I would learn the most.

Needs and knowledge changed over time, so I made different iterations to add new
features and account for the lessons learned from previous builds.

## Features

- 40% – All keys can be reached with minimal finger movement.
- Splittable – You can split the keyboard for more comfort, or use it as one
  piece for better portability.
- Hot-swappable switches – No desoldering pain if you want to try new switches.

## Feedback

If you have some feedback or questions, feel free to [create an issue](https://github.com/nglgzz/42/issues/new). Your input is more than welcome!

## Pics

Pictures for the current version will come soon. In the meantime, you can check
the previous versions.

## Previous Versions

- [version 3](https://github.com/nglgzz/42/tree/rev-3) –
  PCB, QMK, Bluetooth, micro USB
  <br/><img alt="v3 picture" src="https://github.com/nglgzz/42/blob/rev-3/42.jpg?raw=true" width="400">
- [version 2](https://github.com/nglgzz/42/tree/rev-2) –
  Handwired, QMK, Bluetooth, micro USB
  <br/><img alt="v2 picture"  src="https://github.com/nglgzz/42/blob/rev-2/42.jpg?raw=true" width="400">
- [version 1:](https://github.com/nglgzz/42/tree/rev-1)
  PCB, Split, TMK firmware, USB C
  <br/><img alt="v1 picture" src="https://raw.githubusercontent.com/nglgzz/42/rev-1/42.jpeg" width="400">
