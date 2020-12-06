// Generated by KLFC 1.5.6
// https://github.com/39aldo39/klfc

#include "unimap_trans.h"
#include "action_util.h"
#include "action_layer.h"

enum function_id {
    F_MODIFIER,
};

enum macro_id {
    LIG__exclam_,
    LIG__at_,
    LIG__numbersign_,
    LIG__underscore_,
    LIG__percent_,
    LIG__question_,
    LIG__quotedbl_,
    LIG__asciicircum_,
    LIG__dollar_,
    LIG__bar_,
    LIG__braceleft_,
    LIG__parenleft_,
    LIG__ampersand_,
    LIG__parenright_,
    LIG__braceright_,
    LIG__asciitilde_,
    LIG__plus_,
    LIG__asterisk_,
};

enum modifier_id {
    MOD_SHIFT,
    MOD_SHIFT_L,
    MOD_SHIFT_R,
    MOD_ALTGR,
    MOD_EXTEND,
};

#define AC_FN0 ACTION_FUNCTION_OPT(F_MODIFIER, MOD_SHIFT_L)
#define AC_FN1 ACTION_FUNCTION_OPT(F_MODIFIER, MOD_SHIFT_R)
#define AC_FN2 ACTION_FUNCTION_OPT(F_MODIFIER, MOD_ALTGR)
#define AC_FN3 ACTION_FUNCTION_OPT(F_MODIFIER, MOD_EXTEND)
#define AC_FN4 ACTION_MACRO(LIG__exclam_)
#define AC_FN5 ACTION_MACRO(LIG__at_)
#define AC_FN6 ACTION_MACRO(LIG__numbersign_)
#define AC_FN7 ACTION_MACRO(LIG__underscore_)
#define AC_FN8 ACTION_MACRO(LIG__percent_)
#define AC_FN9 ACTION_MACRO(LIG__question_)
#define AC_FN10 ACTION_MACRO(LIG__quotedbl_)
#define AC_FN11 ACTION_MACRO(LIG__asciicircum_)
#define AC_FN12 ACTION_MACRO(LIG__dollar_)
#define AC_FN13 ACTION_MACRO(LIG__bar_)
#define AC_FN14 ACTION_MACRO(LIG__braceleft_)
#define AC_FN15 ACTION_MACRO(LIG__parenleft_)
#define AC_FN16 ACTION_MACRO(LIG__ampersand_)
#define AC_FN17 ACTION_MACRO(LIG__parenright_)
#define AC_FN18 ACTION_MACRO(LIG__braceright_)
#define AC_FN19 ACTION_MACRO(LIG__asciitilde_)
#define AC_FN20 ACTION_MACRO(LIG__plus_)
#define AC_FN21 ACTION_MACRO(LIG__asterisk_)

#ifdef KEYMAP_SECTION_ENABLE
const action_t actionmaps[][UNIMAP_ROWS][UNIMAP_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const action_t actionmaps[][UNIMAP_ROWS][UNIMAP_COLS] PROGMEM = {
#endif
    // None
    [0] = UNIMAP(
               F13, F14, F15, F16, F17, F18, F19, F20, F21, F22, F23, F24,
     ESC,       F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,          PSCR,SLCK,PAUS,         VOLD,VOLU,MUTE,
     GRV,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL,JYEN,BSPC,      INS,HOME,PGUP,    NLCK,PSLS,PAST,PMNS,
     TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,     BSLS,      DEL, END,PGDN,      P7,  P8,  P9,PPLS,
    CAPS,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT,     NUHS, ENT,                          P4,  P5,  P6,PCMM,
     FN0,NUBS,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,       RO, FN1,            UP,           P1,  P2,  P3,PENT,
    LCTL,LGUI, FN2,MHEN,           SPC,          HENK,KANA,RALT, FN3, APP,RCTL,     LEFT,DOWN,RGHT,      P0,     PDOT,PEQL
    ),
    // Extend
    [1] = UNIMAP(
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
    TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,TRNS,TRNS,         TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
    TRNS, FN4, FN5, FN6, FN7, FN8, FN8,HOME,PGDN,PGUP, END,BSPC,TRNS,     TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
    TRNS, FN9, GRV,FN10,QUOT,FN11,FN12,LEFT,DOWN,  UP,RGHT, ENT,     TRNS,TRNS,                        TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,FN13,LBRC,FN14,FN15,FN16,BSLS,FN17,FN18,RBRC,FN19,     TRNS,TRNS,          TRNS,         TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,          TRNS,          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,     TRNS,TRNS
    ),
    // Shift+Extend
    [2] = UNIMAP(
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
    TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,TRNS,TRNS,         TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
    TRNS, FN9,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,                        TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,          TRNS,         TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,          TRNS,          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,     TRNS,TRNS
    ),
    // AltGr
    [3] = UNIMAP(
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
    TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,TRNS,TRNS,         TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, FN8,   7,   8,   9,FN20,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, EQL,   4,   5,   6,MINS,TRNS,     TRNS,TRNS,                        TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   0,   1,   2,   3,FN21,     TRNS,TRNS,          TRNS,         TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,          TRNS,          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,     TRNS,TRNS
    ),
    // Shift+AltGr
    [4] = UNIMAP(
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
    TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,TRNS,TRNS,         TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  F7,  F8,  F9, F10,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  F4,  F5,  F6, F11,TRNS,     TRNS,TRNS,                        TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  F1,  F2,  F3, F12,     TRNS,TRNS,          TRNS,         TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,          TRNS,          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,     TRNS,TRNS
    ),
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    switch (id) {
        case LIG__exclam_:
            return record->event.pressed ?
                   MACRO(SM(), CM(), D(LSFT), T(1), U(LSFT), RM(), END) :
                   MACRO_NONE;
        case LIG__at_:
            return record->event.pressed ?
                   MACRO(SM(), CM(), D(LSFT), T(2), U(LSFT), RM(), END) :
                   MACRO_NONE;
        case LIG__numbersign_:
            return record->event.pressed ?
                   MACRO(SM(), CM(), D(LSFT), T(3), U(LSFT), RM(), END) :
                   MACRO_NONE;
        case LIG__underscore_:
            return record->event.pressed ?
                   MACRO(SM(), CM(), D(LSFT), T(MINS), U(LSFT), RM(), END) :
                   MACRO_NONE;
        case LIG__percent_:
            return record->event.pressed ?
                   MACRO(SM(), CM(), D(LSFT), T(5), U(LSFT), RM(), END) :
                   MACRO_NONE;
        case LIG__question_:
            return record->event.pressed ?
                   MACRO(SM(), CM(), D(LSFT), T(SLSH), U(LSFT), RM(), END) :
                   MACRO_NONE;
        case LIG__quotedbl_:
            return record->event.pressed ?
                   MACRO(SM(), CM(), D(LSFT), T(QUOT), U(LSFT), RM(), END) :
                   MACRO_NONE;
        case LIG__asciicircum_:
            return record->event.pressed ?
                   MACRO(SM(), CM(), D(LSFT), T(6), U(LSFT), RM(), END) :
                   MACRO_NONE;
        case LIG__dollar_:
            return record->event.pressed ?
                   MACRO(SM(), CM(), D(LSFT), T(4), U(LSFT), RM(), END) :
                   MACRO_NONE;
        case LIG__bar_:
            return record->event.pressed ?
                   MACRO(SM(), CM(), D(LSFT), T(BSLS), U(LSFT), RM(), END) :
                   MACRO_NONE;
        case LIG__braceleft_:
            return record->event.pressed ?
                   MACRO(SM(), CM(), D(LSFT), T(LBRC), U(LSFT), RM(), END) :
                   MACRO_NONE;
        case LIG__parenleft_:
            return record->event.pressed ?
                   MACRO(SM(), CM(), D(LSFT), T(9), U(LSFT), RM(), END) :
                   MACRO_NONE;
        case LIG__ampersand_:
            return record->event.pressed ?
                   MACRO(SM(), CM(), D(LSFT), T(7), U(LSFT), RM(), END) :
                   MACRO_NONE;
        case LIG__parenright_:
            return record->event.pressed ?
                   MACRO(SM(), CM(), D(LSFT), T(0), U(LSFT), RM(), END) :
                   MACRO_NONE;
        case LIG__braceright_:
            return record->event.pressed ?
                   MACRO(SM(), CM(), D(LSFT), T(RBRC), U(LSFT), RM(), END) :
                   MACRO_NONE;
        case LIG__asciitilde_:
            return record->event.pressed ?
                   MACRO(SM(), CM(), D(LSFT), T(GRV), U(LSFT), RM(), END) :
                   MACRO_NONE;
        case LIG__plus_:
            return record->event.pressed ?
                   MACRO(SM(), CM(), D(LSFT), T(EQL), U(LSFT), RM(), END) :
                   MACRO_NONE;
        case LIG__asterisk_:
            return record->event.pressed ?
                   MACRO(SM(), CM(), D(LSFT), T(8), U(LSFT), RM(), END) :
                   MACRO_NONE;
    }
    return MACRO_NONE;
}

#define MOD_SHIFT_MASK (MOD_BIT(KC_LSFT)|MOD_BIT(KC_RSFT))

enum vmod_mask {
    VMOD_ALTGR_MASK = 1,
    VMOD_EXTEND_MASK = 2,
};

uint8_t vmods = 0;

const uint8_t layer_states[] = {
    0x1, // None
    0x1, // Shift
    0x9, // AltGr
    0x19, // Shift+AltGr
    0x3, // Extend
    0x7, // Shift+Extend
    0x3, // AltGr+Extend
    0x3, // Shift+AltGr+Extend
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
    uint8_t pressed = record->event.pressed;
    switch (id) {
        case F_MODIFIER:
            // Set the new modifier
            switch (opt) {
                case MOD_SHIFT: pressed ? add_key(KC_LSFT) : del_key(KC_LSFT); break;
                case MOD_SHIFT_L: pressed ? add_key(KC_LSFT) : del_key(KC_LSFT); break;
                case MOD_SHIFT_R: pressed ? add_key(KC_RSFT) : del_key(KC_RSFT); break;
                case MOD_ALTGR: pressed ? (vmods |= VMOD_ALTGR_MASK) : (vmods &= ~VMOD_ALTGR_MASK); break;
                case MOD_EXTEND: pressed ? (vmods |= VMOD_EXTEND_MASK) : (vmods &= ~VMOD_EXTEND_MASK); break;
            }

            // Update the layer
            uint8_t mods = get_mods();
            uint8_t layer_index = 0;
            layer_index |= mods & MOD_SHIFT_MASK ? 1 : 0;
            layer_index |= vmods << 1;
            layer_clear();
            layer_or(layer_states[layer_index]);
            break;
    }
}
