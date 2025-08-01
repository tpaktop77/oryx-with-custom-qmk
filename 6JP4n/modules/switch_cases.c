    case LANG_SWITCH_COMBO_ACTION:

    if (record->event.pressed) {
        uint8_t current_highest_layer = get_highest_layer(layer_state);

        if (current_highest_layer == QMK_LAYER_ENG) {
            layer_move(QMK_LAYER_RUS);
            SEND_STRING(SS_LCTL(SS_LSFT("2")));
        } else {
            layer_move(QMK_LAYER_ENG);
            SEND_STRING(SS_LCTL(SS_LSFT("1")));
        }
    }
    return false;

    case OS_AWARE_COPY:
      if (record->event.pressed) {
#if defined(OS_DETECTION_ENABLE)
        os_variant_t host_os = detected_host_os();
        if (host_os == OS_MACOS || host_os == OS_IOS) {
          SEND_STRING(SS_LGUI("c"));
        } else {
          SEND_STRING(SS_LCTL("c"));
        }
#else
        SEND_STRING(SS_LCTL("c"));
#endif
      }
      return false;

    case OS_AWARE_PASTE:
      if (record->event.pressed) {
#if defined(OS_DETECTION_ENABLE)
        os_variant_t host_os = detected_host_os();
        if (host_os == OS_MACOS || host_os == OS_IOS) {
          SEND_STRING(SS_LGUI("v"));
        } else {
          SEND_STRING(SS_LCTL("v"));
        }
#else
        SEND_STRING(SS_LCTL("v"));
#endif
      }
      return false;
    case OS_AWARE_CUT:

      if (record->event.pressed) {
#if defined(OS_DETECTION_ENABLE)
        os_variant_t host_os = detected_host_os();
        if (host_os == OS_MACOS || host_os == OS_IOS) {
          SEND_STRING(SS_LGUI("x"));
        } else {
          SEND_STRING(SS_LCTL("x"));
        }
#else
        SEND_STRING(SS_LCTL("x"));
#endif
      }
      return false;

    case OS_AWARE_UNDO:

      if (record->event.pressed) {
#if defined(OS_DETECTION_ENABLE)
        os_variant_t host_os = detected_host_os();
        if (host_os == OS_MACOS || host_os == OS_IOS) {
          SEND_STRING(SS_LGUI("z"));
        } else {
          SEND_STRING(SS_LCTL("z"));
        }
#else
        SEND_STRING(SS_LCTL("z"));
#endif
      }
      return false;

    case OS_AWARE_REDO:

      if (record->event.pressed) {
#if defined(OS_DETECTION_ENABLE)
        os_variant_t host_os = detected_host_os();
        if (host_os == OS_MACOS || host_os == OS_IOS) {
          SEND_STRING(SS_LGUI(SS_LSFT("z")));
        } else {
          SEND_STRING(SS_LCTL(SS_LSFT("z")));
        }
#else
        SEND_STRING(SS_LCTL(SS_LSFT("z")));
#endif
      }
      return false;

        case OS_AWARE_VOICE:
            if (record->event.pressed) {
#if defined(OS_DETECTION_ENABLE)
                os_variant_t host_os = detected_host_os();
                if (host_os == OS_MACOS || host_os == OS_IOS) {
                    tap_code16(MAC_SIRI);
                } else  {
                    SEND_STRING(SS_LGUI("h"));
                }
#else
            SEND_STRING(SS_LGUI("h"));
#endif
            }
            return false;

        case ALT_TAB:
            if (record->event.pressed) {
#if defined(OS_DETECTION_ENABLE)
                os_variant_t host_os = detected_host_os();
                if (host_os == OS_MACOS || host_os == OS_IOS) {
                    register_code(KC_LGUI);
                    tap_code(KC_TAB);
                    unregister_code(KC_LGUI);
                } else {
                    register_code(KC_LALT);
                    tap_code(KC_TAB);
                    unregister_code(KC_LALT);
                }
#else
                register_code(KC_LALT);
                tap_code(KC_TAB);
                unregister_code(KC_LALT);
#endif
            }
            return false;

    case SELECT_ALL:
      if (record->event.pressed) {
#if defined(OS_DETECTION_ENABLE)
        os_variant_t host_os = detected_host_os();
        if (host_os == OS_MACOS || host_os == OS_IOS) {
          SEND_STRING(SS_LGUI("a"));
        } else {
          SEND_STRING(SS_LCTL("a"));
        }
#else
        SEND_STRING(SS_LCTL("a"));
#endif
      }
      return false;

        case WORD_PREV:
            if (record->event.pressed) {
#if defined(OS_DETECTION_ENABLE)
                os_variant_t host_os = detected_host_os();
                if (host_os == OS_MACOS || host_os == OS_IOS) {
                    register_code(KC_LALT);
                    tap_code(KC_LEFT);
                    unregister_code(KC_LALT);
                } else {
                    register_code(KC_LEFT_CTRL);
                    tap_code(KC_LEFT);
                    unregister_code(KC_LEFT_CTRL);
                }
#else
                register_code(KC_LEFT_CTRL);
                tap_code(KC_LEFT);
                unregister_code(KC_LEFT_CTRL);
#endif
            }
            return false;

        case WORD_NEXT:
            if (record->event.pressed) {
#if defined(OS_DETECTION_ENABLE)
                os_variant_t host_os = detected_host_os();
                if (host_os == OS_MACOS || host_os == OS_IOS) {
                    register_code(KC_LALT);
                    tap_code(KC_RIGHT);
                    unregister_code(KC_LALT);
                } else {
                    register_code(KC_LEFT_CTRL);
                    tap_code(KC_RIGHT);
                    unregister_code(KC_LEFT_CTRL);
                }
#else
                register_code(KC_LEFT_CTRL);
                tap_code(KC_RIGHT);
                unregister_code(KC_LEFT_CTRL);
#endif
            }
            return false;


        case WORD_BS:
            if (record->event.pressed) {
#if defined(OS_DETECTION_ENABLE)
                os_variant_t host_os = detected_host_os();
                if (host_os == OS_MACOS || host_os == OS_IOS) {
                    register_code(KC_LALT);
                    tap_code(KC_BSPC);
                    unregister_code(KC_LALT);
                } else {
                    register_code(KC_LEFT_CTRL);
                    tap_code(KC_BSPC);
                    unregister_code(KC_LEFT_CTRL);
                }
#else
                register_code(KC_LEFT_CTRL);
                tap_code(KC_BSPC);
                unregister_code(KC_LEFT_CTRL);
#endif
            }
            return false;

        case WORD_DEL:
            if (record->event.pressed) {
#if defined(OS_DETECTION_ENABLE)
                os_variant_t host_os = detected_host_os();
                if (host_os == OS_MACOS || host_os == OS_IOS) {
                    register_code(KC_LALT);
                    tap_code(KC_DELETE);
                    unregister_code(KC_LALT);
                } else {
                    register_code(KC_LEFT_CTRL);
                    tap_code(KC_DELETE);
                    unregister_code(KC_LEFT_CTRL);
                }
#else
                register_code(KC_LEFT_CTRL);
                tap_code(KC_DELETE);
                unregister_code(KC_LEFT_CTRL);
#endif
            }
            return false;
