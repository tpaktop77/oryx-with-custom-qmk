#include QMK_KEYBOARD_H

#define QMK_LAYER_ENG 0
#define QMK_LAYER_RUS 1

#define MAC_SIRI_USAGE 0xCF

typedef struct {
    uint16_t keycode;
    uint16_t mac;
    uint16_t linux_; // 0 = same as other
    uint16_t other;
} os_shortcut_t;

static const os_shortcut_t os_shortcuts[] = {
    {OS_AWARE_COPY,  G(KC_C),        C(KC_INS), C(KC_C)},
    {OS_AWARE_PASTE, G(KC_V),        S(KC_INS), C(KC_V)},
    {OS_AWARE_CUT,   G(KC_X),        S(KC_DEL), C(KC_X)},
    {OS_AWARE_UNDO,  G(KC_Z),        0,         C(KC_Z)},
    {OS_AWARE_REDO,  G(S(KC_Z)),     0,         C(S(KC_Z))},
    {SELECT_ALL,     G(KC_A),        0,         C(KC_A)},
    {ALT_TAB,        G(KC_TAB),      0,         A(KC_TAB)},
    {ALT_WIN,        C(KC_UP),       0,         G(KC_TAB)},
    {WORD_PREV,      A(KC_LEFT),     0,         C(KC_LEFT)},
    {WORD_NEXT,      A(KC_RIGHT),    0,         C(KC_RIGHT)},
    {WORD_BS,        A(KC_BSPC),     0,         C(KC_BSPC)},
    {WORD_DEL,       A(KC_DEL),      0,         C(KC_DEL)},
};

static bool host_is_mac(void) {
    os_variant_t host_os = detected_host_os();
    return host_os == OS_MACOS || host_os == OS_IOS;
}

static uint16_t os_shortcut_for(const os_shortcut_t *shortcut) {
    if (host_is_mac()) {
        return shortcut->mac;
    }
    if (detected_host_os() == OS_LINUX && shortcut->linux_) {
        return shortcut->linux_;
    }
    return shortcut->other;
}

bool process_record_custom_qmk(uint16_t keycode, keyrecord_t *record) {
    for (uint8_t i = 0; i < ARRAY_SIZE(os_shortcuts); i++) {
        if (os_shortcuts[i].keycode == keycode) {
            if (record->event.pressed) {
                tap_code16(os_shortcut_for(&os_shortcuts[i]));
            }
            return false;
        }
    }

    switch (keycode) {
        case LANG_SWITCH_COMBO_ACTION:
            if (record->event.pressed) {
                if (get_highest_layer(layer_state) == QMK_LAYER_ENG) {
                    layer_move(QMK_LAYER_RUS);
                    tap_code16(C(S(KC_2)));
                } else {
                    layer_move(QMK_LAYER_ENG);
                    tap_code16(C(S(KC_1)));
                }
            }
            return false;

        case OS_AWARE_VOICE:
            if (host_is_mac()) {
                // Consumer usage must be released, otherwise Siri stays "held".
                host_consumer_send(record->event.pressed ? MAC_SIRI_USAGE : 0);
            } else if (record->event.pressed) {
                tap_code16(G(KC_H));
            }
            return false;
    }

    return true;
}
