# Firmware

Congrats, you made it this far!

Time to give the project some life.

## Compile the firmware yourself

### set up the build environment

follow the official guide cause i'm too lazy
[build environment official docs](https://get.vial.today/docs/porting-to-vial.html#1-prepare-your-build-environment)

### Add the keyboard to the build environment

copy the contents of [Code](https://github.com/KillrOfLife/Macro32/tree/main/Code) to the keyboards folder in qmk-vial

### Compile the firmware

Use the following command for vial compatibility

```sh
qmk compile -kb killroflife/macro32_v1 -km vial
```

Use the following command if you want to suffer with QMK

```sh
qmk compile -kb killroflife/macro32_v1 -km default
```

## Flash the firmware

1. Connect the keyboard to your computer
2. hold the boot button, press and release the reset button and lastly release the boot button
    This made sure the board is in DFU or flashing mode
3. use qmk toolbox to flash the firmware file

## Customize the board

If you've chosen the sane option to use vial go to [vial.rocks](https://vial.rocks/) connnect your board and you'll be able to choose the actions when you press a key.

If you've chosen QMK, GOOD LUCK you've brought this on yourself.
