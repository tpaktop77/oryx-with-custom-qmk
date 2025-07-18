bool is_oneshot_cancel_key(uint16_t keycode, keyrecord_t *record) {

    if ((keycode & QK_LAYER_TAP) == QK_LAYER_TAP) {
      // uint8_t layer = (keycode >> 8) & 0xFF;
      uint8_t kc    =  keycode        & 0xFF;
      if (record->tap.count > 0) return false;
       
      if (kc == KC_DELETE || kc == KC_SPACE || kc == KC_TAB) {
        return true;
      }
    }

    return false;
}

bool is_oneshot_ignored_key(uint16_t keycode) {
    switch (keycode) {
    case LT(3, KC_DELETE):
    case LT(5, KC_TAB):
    case LT(4, KC_SPACE):
    case OS_SHFT:
    case OS_CTRL:
    case OS_ALT:
    case OS_CMD:
        return true;
    default:
        return false;
    }
}

bool sw_win_active = false;
bool sw_tab_active = false;

oneshot_state os_shft_state = os_up_unqueued;
oneshot_state os_ctrl_state = os_up_unqueued;
oneshot_state os_alt_state = os_up_unqueued;
oneshot_state os_cmd_state = os_up_unqueued;
