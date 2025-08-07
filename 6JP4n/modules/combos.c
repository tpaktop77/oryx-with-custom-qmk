const uint16_t PROGMEM cmb_lngsw_gr[] = { KC_F,           KC_O,           KC_U, COMBO_END};
const uint16_t PROGMEM cmb_lngsw_ru[] = { RU_GHE,         RU_SHA,         RU_SHCH, COMBO_END};

const uint16_t PROGMEM cmb_enter_gr[] = { KC_H,           KC_A,           KC_E, COMBO_END};
const uint16_t PROGMEM cmb_enter_ru[] = { RU_O,           RU_EL,          RU_DE, COMBO_END};
const uint16_t PROGMEM cmb_enter_tb[] = { KC_4,           KC_5,           KC_6, COMBO_END};

const uint16_t PROGMEM cmb_togg_gr[]  = { KC_N,           KC_S, COMBO_END};
const uint16_t PROGMEM cmb_togg_ru[]  = { RU_EF,          RU_A, COMBO_END};

const uint16_t PROGMEM cmb_caps_gr[]  = { KC_N,           KC_G, COMBO_END};
const uint16_t PROGMEM cmb_caps_ru[]  = { RU_EF,          RU_PE, COMBO_END};

// ============= Combos for OS Aware Copy/Paste/Cut =============

const uint16_t PROGMEM cmb_copy_gr[]  = { KC_R,           KC_L,     COMBO_END};
const uint16_t PROGMEM cmb_copy_ru[]  = { RU_YERU,        RU_TSE,   COMBO_END};
const uint16_t PROGMEM cmb_copy_tb[]  = { ST_MACRO_4,     ST_MACRO_1, COMBO_END};

const uint16_t PROGMEM cmb_paste_gr[] = { KC_T,           KC_D,       COMBO_END};
const uint16_t PROGMEM cmb_paste_ru[] = { RU_VE,          RU_U,       COMBO_END};
const uint16_t PROGMEM cmb_paste_tb[] = { ST_MACRO_2,     ST_MACRO_5, COMBO_END};

const uint16_t PROGMEM cmb_cut_gr[]   = { KC_R,  KC_L, KC_T, KC_D, COMBO_END};
const uint16_t PROGMEM cmb_cut_ru[]   = { RU_YERU, RU_TSE, RU_VE,  RU_U, COMBO_END};

// ============= Combos for OS Aware Undo/Redo/Voice =============

const uint16_t PROGMEM cmb_undo_gr[]  = { KC_A,         KC_O,             COMBO_END};
const uint16_t PROGMEM cmb_undo_ru[]  = { RU_EL,        RU_SHA,           RU_YU, COMBO_END};

const uint16_t PROGMEM cmb_redo_gr[]  = { KC_E,         KC_U,             COMBO_END};
const uint16_t PROGMEM cmb_redo_ru[]  = { RU_DE,        RU_SHCH,          COMBO_END};

const uint16_t PROGMEM cmb_voice_gr[] = { KC_Y,           KC_H,           KC_A, COMBO_END};
const uint16_t PROGMEM cmb_voice_ru[] = { RU_ER,          RU_O,           RU_EL, COMBO_END};

// ============ Combo for Tab =============

const uint16_t PROGMEM cmb_tab_gr[]   = { KC_R,           KC_T,           KC_S, COMBO_END};
const uint16_t PROGMEM cmb_tab_ru[]   = { RU_YERU,        RU_VE,          RU_A, COMBO_END};

// ============= Combos for Ctrl + Backspace/Delete/Left/Right =============

const uint16_t PROGMEM cmb_ctrl_bs_gr[]   = { KC_N,    KC_R,           KC_T, COMBO_END};
const uint16_t PROGMEM cmb_ctrl_bs_ru[]  = { RU_EF,   RU_YERU,        RU_VE, COMBO_END};

const uint16_t PROGMEM cmb_ctrl_del_gr[]  = { KC_A,    KC_E,           KC_I, COMBO_END};
const uint16_t PROGMEM cmb_ctrl_del_ru[] = { RU_EL,   RU_DE,          RU_ZHE, COMBO_END};


const uint16_t PROGMEM cmb_ctrl_left_gr[]  = { KC_Q,           KC_X,           KC_M,        COMBO_END};
const uint16_t PROGMEM cmb_ctrl_left_ru[]  = { RU_YA,          RU_CHE,         RU_ES,       COMBO_END};

const uint16_t PROGMEM cmb_ctrl_right_gr[] = { KC_F22,         KC_F23,         KC_F24,      COMBO_END};
const uint16_t PROGMEM cmb_ctrl_right_ru[] = { RU_BE,          RU_YU,          RU_YO,       COMBO_END};


// ============= Combos for Word Erase =============

const uint16_t PROGMEM cmb_alt_win_gr[] = { KC_N,  KC_R,    KC_T,  KC_S, COMBO_END};
const uint16_t PROGMEM cmb_alt_win_ru[] = { RU_EF, RU_YERU, RU_VE, RU_A, COMBO_END};

const uint16_t PROGMEM cmb_smile_gr[]     = { KC_G,          KC_Z, COMBO_END};
const uint16_t PROGMEM cmb_smile_ru[]     = { RU_PE,         RU_IE, COMBO_END};

const uint16_t PROGMEM cmb_vim_gr[]       = { KC_H,            KC_I, COMBO_END};

const uint16_t PROGMEM cmb_alt_tab_gr[]   = { KC_H, KC_A,  KC_E,  KC_I, COMBO_END };
const uint16_t PROGMEM cmb_alt_tab_en[]  = { RU_O, RU_EL, RU_DE, RU_ZHE, COMBO_END };

const uint16_t PROGMEM cmb_select_all_gr[] = { KC_N,           KC_B, COMBO_END };
const uint16_t PROGMEM cmb_select_all_en[] = { RU_EF,           RU_SHTI, COMBO_END };

// ============= Combos for Windows/Alt/Shift/Ctrl + Gr Left/Right =============

const uint16_t PROGMEM cmb_alt_gr_left[]   = { KC_Q,           KC_N, COMBO_END};
const uint16_t PROGMEM cmb_win_gr_left[]   = { KC_X,           KC_R, COMBO_END};
const uint16_t PROGMEM cmb_shift_gr_left[] = { KC_M,           KC_T, COMBO_END};
const uint16_t PROGMEM cmb_ctrl_gr_left[]  = { KC_C,           KC_S, COMBO_END};

const uint16_t PROGMEM cmb_ctrl_gr_right[]  = { KC_P,          KC_H, COMBO_END};
const uint16_t PROGMEM cmb_shift_gr_right[] = { KC_F22,        KC_A, COMBO_END};
const uint16_t PROGMEM cmb_win_gr_right[]   = { KC_F23,        KC_E, COMBO_END};
const uint16_t PROGMEM cmb_alt_gr_right[]   = { KC_F24,        KC_I, COMBO_END};

const uint16_t PROGMEM cmb_alt_ru_left[]   = { RU_YA,          RU_EF, COMBO_END};
const uint16_t PROGMEM cmb_win_ru_left[]   = { RU_CHE,         RU_YERU, COMBO_END};
const uint16_t PROGMEM cmb_shift_ru_left[] = { RU_ES,          RU_VE, COMBO_END};
const uint16_t PROGMEM cmb_ctrl_ru_left[]  = { RU_EM,          RU_A, COMBO_END};

const uint16_t PROGMEM cmb_ctrl_ru_right[]  = { RU_SOFT,       RU_O, COMBO_END};
const uint16_t PROGMEM cmb_shift_ru_right[] = { RU_BE,         RU_EL, COMBO_END};
const uint16_t PROGMEM cmb_win_ru_right[]   = { RU_YU,         RU_DE, COMBO_END};
const uint16_t PROGMEM cmb_alt_ru_right[]   = { RU_YO,         RU_ZHE, COMBO_END};


combo_t key_combos[] = {

    COMBO(cmb_lngsw_gr, LANG_SWITCH_COMBO_ACTION),
    COMBO(cmb_lngsw_ru, LANG_SWITCH_COMBO_ACTION),

    COMBO(cmb_enter_gr, KC_ENTER),
    COMBO(cmb_enter_ru, KC_ENTER),
    COMBO(cmb_enter_tb, KC_ENTER),

    COMBO(cmb_togg_gr, CW_TOGG),
    COMBO(cmb_togg_ru, CW_TOGG),

    COMBO(cmb_caps_gr, KC_CAPS),
    COMBO(cmb_caps_ru, KC_CAPS),


    COMBO(cmb_copy_gr, OS_AWARE_COPY),
    COMBO(cmb_copy_ru, OS_AWARE_COPY),
    COMBO(cmb_copy_tb, OS_AWARE_COPY),

    COMBO(cmb_paste_gr, OS_AWARE_PASTE),
    COMBO(cmb_paste_ru, OS_AWARE_PASTE),
    COMBO(cmb_paste_tb, OS_AWARE_PASTE),

    COMBO(cmb_cut_gr, OS_AWARE_CUT),
    COMBO(cmb_cut_ru, OS_AWARE_CUT),


    COMBO(cmb_undo_gr, OS_AWARE_UNDO),
    COMBO(cmb_undo_ru, OS_AWARE_UNDO),

    COMBO(cmb_redo_gr, OS_AWARE_REDO),
    COMBO(cmb_redo_ru, OS_AWARE_REDO),

    COMBO(cmb_voice_gr, OS_AWARE_VOICE),
    COMBO(cmb_voice_ru, OS_AWARE_VOICE),

    COMBO(cmb_tab_gr, KC_TAB),
    COMBO(cmb_tab_ru, KC_TAB),

    COMBO(cmb_ctrl_bs_gr, WORD_BS),
    COMBO(cmb_ctrl_bs_ru, WORD_BS),
    COMBO(cmb_ctrl_del_gr, WORD_DEL),
    COMBO(cmb_ctrl_del_ru, WORD_DEL),

    COMBO(cmb_ctrl_left_gr, WORD_PREV),
    COMBO(cmb_ctrl_left_ru, WORD_PREV),
    COMBO(cmb_ctrl_right_gr, WORD_NEXT),
    COMBO(cmb_ctrl_right_ru, WORD_NEXT),

    COMBO(cmb_smile_gr, MO(9)),
    COMBO(cmb_smile_ru, MO(10)),

    COMBO(cmb_vim_gr, OSL(6)),

    COMBO(cmb_alt_tab_gr, ALT_TAB),
    COMBO(cmb_alt_tab_en, ALT_TAB),

    COMBO(cmb_alt_win_gr, ALT_WIN),
    COMBO(cmb_alt_win_ru, ALT_WIN),

    COMBO(cmb_select_all_gr, SELECT_ALL),
    COMBO(cmb_select_all_en, SELECT_ALL),

    COMBO(cmb_win_gr_left, KC_LEFT_GUI),
    COMBO(cmb_alt_gr_left, KC_LEFT_ALT),
    COMBO(cmb_shift_gr_left, KC_LEFT_SHIFT),
    COMBO(cmb_ctrl_gr_left, KC_LEFT_CTRL),

    COMBO(cmb_ctrl_gr_right, KC_RIGHT_CTRL),
    COMBO(cmb_shift_gr_right, KC_RIGHT_SHIFT),
    COMBO(cmb_alt_gr_right, KC_RIGHT_ALT),
    COMBO(cmb_win_gr_right, KC_RIGHT_GUI),

    COMBO(cmb_win_ru_left, KC_LEFT_GUI),
    COMBO(cmb_alt_ru_left, KC_LEFT_ALT),
    COMBO(cmb_shift_ru_left, KC_LEFT_SHIFT),
    COMBO(cmb_ctrl_ru_left, KC_LEFT_CTRL),

    COMBO(cmb_ctrl_ru_right, KC_RIGHT_CTRL),
    COMBO(cmb_shift_ru_right, KC_RIGHT_SHIFT),
    COMBO(cmb_alt_ru_right, KC_RIGHT_ALT),
    COMBO(cmb_win_ru_right, KC_RIGHT_GUI),


};
