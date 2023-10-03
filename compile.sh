#!/bin/sh
set -e

# Define directory paths
CONFIG_DIR="$HOME/Personal/keyboards/qmk-configs"
FIRMWARE_DIR="$HOME/Personal/keyboards/qmk_firmware"
QMK_TOOLBOX="/Applications/QMK Toolbox.app"

# Accept arguments or use default values
KEYBOARD=${1:-"sofle_choc"}
KEYMAP=${2:-"wassim"}

# Copy keymap to qmk directory
cp -rf "${CONFIG_DIR}/${KEYBOARD}/keymaps/${KEYMAP}" "${FIRMWARE_DIR}/keyboards/${KEYBOARD}/keymaps/"

# Go to firmware directory
cd "${FIRMWARE_DIR}"

# Compile
qmk compile -kb "${KEYBOARD}" -km "${KEYMAP}"

# Go back to config directory
cd "${CONFIG_DIR}"

# Open result in QMK Toolbox
open -a "${QMK_TOOLBOX}" --args "${FIRMWARE_DIR}/${KEYBOARD}_${KEYMAP}.hex"
