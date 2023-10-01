# Keyboards & QMK Firmware

These are mostly notes for myself. However, if you've stumbled across here and have questions I'd be happy to help.

### Sofle Choc

Stored here is my keymap and configuration for a Sofle Choc keyboard that I had [pre-built](https://shop.beekeeb.com/product/presoldered-sofle-rgb-choc-v2-1/) by [beekeeb](https://beekeeb.com).

The [wassim](./sofle_choc/keymaps/wassim) directory contains my initial pass at porting the keymaps I had setup using [via](https://usevia.app/).

#### Compile Firmware

Execute this on the CLI

```shell
cp -rf ~/Personal/keyboards/qmk-configs/sofle_choc/keymaps/wassim ~/Personal/keyboards/qmk_firmware/keyboards/sofle_choc/keymaps/
cd ~/Personal/keyboards/qmk_firmware
qmk compile -kb sofle_choc -km wassim
```

The output will show where the firmware file (`.hex`) was written to.

#### Flash Firmware

1. Launch the [QMK Toolbox](https://github.com/qmk/qmk_toolbox) app

```shell
open -a "QMK Toolbox" --args ~/Personal/keyboards/qmk_firmware/sofle_choc_wassim.hex
```

2. Check the Auto-Flash box
3. Double tap the reset button on the physical keyboard half that's plugged in
4. Move the USB-C cable to the other keyboard half and double tap reset

Both sides should be flashed now!
