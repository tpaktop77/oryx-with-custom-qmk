# key_combos[] must live in the same translation unit as the Oryx keymap.c
# (combo_count() is computed there), so it is pulled in via introspection
# instead of being pasted into keymap.c.
INTROSPECTION_KEYMAP_C = $(abspath $(MODULE_PATH_CUSTOM_QMK))/combos.inc
