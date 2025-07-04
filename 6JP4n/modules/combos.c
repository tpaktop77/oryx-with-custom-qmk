const uint16_t PROGMEM cmb_home_grp[]  = { KC_NUM,         KC_F,           KC_O, COMBO_END};
const uint16_t PROGMEM cmb_home_rus[]  = { RU_EN, RU_GHE, RU_SHA, COMBO_END};

const uint16_t PROGMEM cmb_end_grp[]   = { KC_O,           KC_U,           KC_J, COMBO_END};
const uint16_t PROGMEM cmb_end_rus[]   = { RU_SHA,         RU_SHCH,        RU_ZE, COMBO_END};

const uint16_t PROGMEM cmb_lngsw_grp[] = { KC_F,           KC_O,           KC_U, COMBO_END};
const uint16_t PROGMEM cmb_lngsw_rus[] = { RU_GHE,         RU_SHA,         RU_SHCH, COMBO_END};

const uint16_t PROGMEM cmb_enter_grp[] = { KC_H,           KC_A,           KC_E, COMBO_END};
const uint16_t PROGMEM cmb_enter_rus[] = { RU_O,           RU_EL,          RU_DE, COMBO_END};
const uint16_t PROGMEM cmb_enter_tbl[] = { KC_KP_4,        KC_KP_5,        KC_KP_6, COMBO_END};

const uint16_t PROGMEM cmb_togg_grp[]  = { KC_N,           KC_S, COMBO_END};
const uint16_t PROGMEM cmb_togg_rus[]  = { RU_EF,          RU_A, COMBO_END};

const uint16_t PROGMEM cmb_caps_grp[]  = { KC_N,           KC_G, COMBO_END};
const uint16_t PROGMEM cmb_caps_rus[]  = { RU_EF,          RU_PE, COMBO_END};


const uint16_t PROGMEM cmb_copy_grp[]  = { KC_B,           LT(9, KC_L),    KC_D, COMBO_END};
const uint16_t PROGMEM cmb_copy_rus[]  = { RU_SHTI,        LT(10, RU_TSE), RU_U, COMBO_END};
const uint16_t PROGMEM cmb_copy_tbl[]  = { ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2, COMBO_END};

const uint16_t PROGMEM cmb_paste_grp[] = { LT(9, KC_L),    KC_D,           KC_W, COMBO_END};
const uint16_t PROGMEM cmb_paste_rus[] = { LT(10, RU_TSE), RU_U,           RU_KA, COMBO_END};
const uint16_t PROGMEM cmb_paste_tbl[] = { ST_MACRO_1,     ST_MACRO_2,     KC_F22, COMBO_END};

const uint16_t PROGMEM cmb_cut_grp[]   = { KC_B,           KC_W, COMBO_END};
const uint16_t PROGMEM cmb_cut_rus[]   = { RU_SHTI,        RU_KA, COMBO_END};


const uint16_t PROGMEM cmb_undo_grp[]  = { KC_P,           KC_F22,         KC_F23, COMBO_END};
const uint16_t PROGMEM cmb_undo_rus[]  = { RU_SOFT,        RU_BE,          RU_YU, COMBO_END};

const uint16_t PROGMEM cmb_redo_grp[]  = { KC_F22,         KC_F23,         KC_F24, COMBO_END};
const uint16_t PROGMEM cmb_redo_rus[]  = { RU_BE,          RU_YU,          RU_YO, COMBO_END};

const uint16_t PROGMEM cmb_voice_grp[] = { KC_Y,           KC_H,           KC_A, COMBO_END};
const uint16_t PROGMEM cmb_voice_rus[] = { RU_ER,          RU_O,           RU_EL, COMBO_END};

const uint16_t PROGMEM cmb_tab_grp[]   = { KC_R,           KC_T,           KC_S, COMBO_END};
const uint16_t PROGMEM cmb_tab_rus[]   = { RU_YERU,        RU_VE,          RU_A, COMBO_END};

const uint16_t PROGMEM cmb_shift_grp_left[]   = { KC_N,           KC_R,           KC_T, COMBO_END};
const uint16_t PROGMEM cmb_shift_grp_right[]  = { KC_A,           KC_E,           KC_I, COMBO_END};
const uint16_t PROGMEM cmb_shift_rus_left[]   = { RU_EF,          RU_YERU,        RU_VE, COMBO_END};
const uint16_t PROGMEM cmb_shift_rus_right[]  = { RU_EL,          RU_DE,          RU_ZHE, COMBO_END};

const uint16_t PROGMEM cmb_cshift_grp[] = { KC_N,           KC_R,           KC_T,           KC_S, COMBO_END};
const uint16_t PROGMEM cmb_cshift_rus[] = { RU_EF,          RU_YERU,        RU_VE,          RU_A, COMBO_END};


combo_t key_combos[] = {
    COMBO(cmb_home_grp, KC_HOME),
    COMBO(cmb_home_rus, KC_HOME),

    COMBO(cmb_end_grp, KC_END),
    COMBO(cmb_end_rus, KC_END),

    COMBO(cmb_lngsw_grp, LANG_SWITCH_COMBO_ACTION),
    COMBO(cmb_lngsw_rus, LANG_SWITCH_COMBO_ACTION),

    COMBO(cmb_enter_grp, KC_ENTER),
    COMBO(cmb_enter_rus, KC_ENTER),
    COMBO(cmb_enter_tbl, KC_ENTER),

    COMBO(cmb_togg_grp, CW_TOGG),
    COMBO(cmb_togg_rus, CW_TOGG),

    COMBO(cmb_caps_grp, KC_CAPS),
    COMBO(cmb_caps_rus, KC_CAPS),


    COMBO(cmb_copy_grp, OS_AWARE_COPY),  
    COMBO(cmb_copy_rus, OS_AWARE_COPY),
    COMBO(cmb_copy_tbl, OS_AWARE_COPY),  

    COMBO(cmb_paste_grp, OS_AWARE_PASTE),
    COMBO(cmb_paste_rus, OS_AWARE_PASTE),
    COMBO(cmb_paste_tbl, OS_AWARE_PASTE),

    COMBO(cmb_cut_grp, OS_AWARE_CUT),
    COMBO(cmb_cut_rus, OS_AWARE_CUT),


    COMBO(cmb_undo_grp, OS_AWARE_UNDO),
    COMBO(cmb_undo_rus, OS_AWARE_UNDO),

    COMBO(cmb_redo_grp, OS_AWARE_REDO),
    COMBO(cmb_redo_rus, OS_AWARE_REDO),

    COMBO(cmb_voice_grp, OS_AWARE_VOICE),
    COMBO(cmb_voice_rus, OS_AWARE_VOICE),

    COMBO(cmb_tab_grp, KC_TAB),
    COMBO(cmb_tab_rus, KC_TAB),

    COMBO(cmb_shift_grp_left, KC_LEFT_SHIFT),
    COMBO(cmb_shift_grp_right, KC_LEFT_SHIFT),
    COMBO(cmb_shift_rus_left, KC_LEFT_SHIFT),
    COMBO(cmb_shift_rus_right, KC_LEFT_SHIFT),

    COMBO(cmb_cshift_grp, C(KC_LEFT_SHIFT)),
    COMBO(cmb_cshift_rus, C(KC_LEFT_SHIFT)),

};
