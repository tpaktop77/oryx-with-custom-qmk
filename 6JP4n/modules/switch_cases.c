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
    } else if (host_os == OS_LINUX) {
      tap_code16(C(KC_INS));   // Ctrl+Insert
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
    } else if (host_os == OS_LINUX) {
      tap_code16(S(KC_INS));   // Shift+Insert
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
    } else if (host_os == OS_LINUX) {
      tap_code16(S(KC_DEL));   // Shift+Delete
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
                    //tap_code16(MAC_SIRI);
                    HCS(0xCF);
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

        case ALT_WIN:
            if (record->event.pressed) {
#if defined(OS_DETECTION_ENABLE)
                os_variant_t host_os = detected_host_os();
                if (host_os == OS_MACOS || host_os == OS_IOS) {
                    register_code(KC_LEFT_CTRL);
                    tap_code(KC_UP);
                    unregister_code(KC_LEFT_CTRL);
                } else {
                    register_code(KC_LGUI);
                    tap_code(KC_TAB);
                    unregister_code(KC_LGUI);
                }
#else
                register_code(KC_LGUI);
                tap_code(KC_TAB);
                unregister_code(KC_LGUI);
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




case WORD_PREV:  // move to previous word (left)
  if (record->event.pressed) {
#if defined(OS_DETECTION_ENABLE)
    os_variant_t host_os = detected_host_os();
    if (host_os == OS_MACOS || host_os == OS_IOS) {
      tap_code16(A(KC_LEFT));     // macOS: Option+Left
    } else {
      tap_code16(C(KC_LEFT));     // Windows/Linux/other: Ctrl+Left
    }
#else
    tap_code16(C(KC_LEFT));
#endif
  }
  return false;

case WORD_NEXT:  // move to next word (right)
  if (record->event.pressed) {
#if defined(OS_DETECTION_ENABLE)
    os_variant_t host_os = detected_host_os();
    if (host_os == OS_MACOS || host_os == OS_IOS) {
      tap_code16(A(KC_RIGHT));    // macOS: Option+Right
    } else {
      tap_code16(C(KC_RIGHT));    // Windows/Linux/other: Ctrl+Right
    }
#else
    tap_code16(C(KC_RIGHT));
#endif
  }
  return false;

case WORD_BS:    // delete previous word (left)
  if (record->event.pressed) {
#if defined(OS_DETECTION_ENABLE)
    os_variant_t host_os = detected_host_os();
    if (host_os == OS_MACOS || host_os == OS_IOS) {
      tap_code16(A(KC_BSPC));     // macOS: Option+Backspace
    } else {
      tap_code16(C(KC_BSPC));     // Windows/other: Ctrl+Backspace
    }
#else
    tap_code16(C(KC_BSPC));
#endif
  }
  return false;

case WORD_DEL:   // delete next word (right)
  if (record->event.pressed) {
#if defined(OS_DETECTION_ENABLE)
    os_variant_t host_os = detected_host_os();
    if (host_os == OS_MACOS || host_os == OS_IOS) {
      tap_code16(A(KC_DEL));      // macOS: Option+Delete (forward delete)
    } else {
      tap_code16(C(KC_DEL));      // Windows/other: Ctrl+Delete
    }
#else
    tap_code16(C(KC_DEL));
#endif
  }
  return false;
