# Build optimizations
LTO_ENABLE = yes          # Link Time Optimization - reduces firmware size

# Feature toggles (Enable only what you use)
BOOTMAGIC_ENABLE = yes    # Hardware master reset shortcuts
# MOUSEKEY_ENABLE = no      # Mouse emulation via keys
EXTRAKEY_ENABLE = yes     # Audio control and system control (media keys)
# CONSOLE_ENABLE = no       # Debug console (disable to save space)
# COMMAND_ENABLE = no       # Command-line debugging via hotkeys
NKRO_ENABLE = yes         # N-Key Rollover (simultaneous key presses)

# Lighting and extra features
# RGBLIGHT_ENABLE = no      # Underglow lighting
# RGB_MATRIX_ENABLE = no    # Per-key RGB matrix
VIA_ENABLE = no           # Runtime layout configuration via VIA
TAP_DANCE_ENABLE = on     # Advanced multi-tap key behavior

AUTO_SHIFT_ENABLE = yes
# AUTOCORRECT_ENABLE = yes # currently does not work with auto shift
CAPS_WORD_ENABLE = yes
TRI_LAYER_ENABLE = yes
