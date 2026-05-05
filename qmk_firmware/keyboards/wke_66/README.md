# Worst Keyboard Ever -- 66 key edition
## wke_66

Main project URL: https://github.com/xunker/worst_keyboard_ever

![wke_66](../../../images/wke_66_small.jpeg)

* Keyboard Maintainer: [M Nielsen](https://github.com/xunker/worst_keyboard_ever)
* Hardware Supported: Pi Pico (RP2040)
* Hardware Availability: https://raspberrypi.org

## Building this firmware

(This assumes you've already cloned the QMK repo and configured your environment.)

First, clone the [parent repo](https://github.com/xunker/worst_keyboard_ever).

Then, symlink the `qmk_firmware/keyboards/wke_66` directory in to your main "qmk_firmware" directory:

```bash
ln -s qmk_firmware/keyboards/wke_66 ~/qmk_firmware/keyboards/wke_66
```

(You could also just copy the files to `~/qmk_firmware/keyboards/wke_66`, but where's the fun in that?)

> [!IMPORTANT]
>
> If you're using MacOS, you need to install a specific version of `gcc-arm-embedded`, the default version in Homebrew _is broken_.
>
> `brew install --cask gcc-arm-embedded`

Now, build the firmware:
```bash
# from ~/qmk_firmware
PATH=/Applications/ArmGNUToolchain/15.2.rel1/arm-none-eabi/bin:$PATH qmk compile -kb wke/wke_66 -km default

# you can also lint the firmware with `qmk lint -kb wke/wke_66 -km default`
```

This will make a `wke_wke_66_default.uf2`. Drag that file to your Pi Pico and you're off!

## Bootloader

To re-enter the Bootloader (like if you need to flash new firmware), you have 3 options:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical button**: Hold down the "bootsel" button on the Pi Pico **while** plugging the board in to USB
* **Keycode**: While the keyboard is connected and running, hold down the `fn` key and press the "App"/"Menu" button

