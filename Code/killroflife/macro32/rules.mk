# MCU name
MCU = STM32F072

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
BOOTLOADER = stm32-dfu

EXTRAKEY_ENABLE 	= yes
NKRO_ENABLE 		= yes
CONSOLE_ENABLE		= no
COMMAND_ENABLE		= no
MOUSEKEY_ENABLE 	= no

ENCODER_ENABLE = yes


RGBLIGHT_ENABLE = yes

