#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

enum {
  TD_COLON_SEMICOLON,
};

tap_dance_action_t tap_dance_actions[] = {
  [TD_COLON_SEMICOLON] = ACTION_TAP_DANCE_DOUBLE(KC_COLON, KC_SEMICOLON),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
               KC_ESC, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,                               KC_CIRC, KC_AMPR, KC_ASTR, KC_PLUS, QK_CAPS_WORD_TOGGLE, KC_BSPC,
               KC_GRV, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y,                                   KC_F, KC_G, KC_C, KC_R, KC_L, KC_DEL,
               KC_TAB, KC_A, KC_O, KC_E, KC_U, KC_I,                                           KC_D, KC_H, KC_T, KC_N, KC_S, KC_MINS,
               KC_PEQL, TD(TD_COLON_SEMICOLON), KC_Q, KC_J, KC_K, KC_X,   KC_LGUI, MO(4),      KC_B, KC_M, KC_W, KC_V, KC_Z, KC_QUES,
                                                            TL_LOWR, OS_LCTL, KC_SPC, KC_ENT, OS_LALT, TL_UPPR
              ),
  [1] = LAYOUT(
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_GT,                                        KC_LT, KC_GT, KC_PSLS, KC_PAST, KC_PMNS, KC_BSPC,
               KC_HOME, KC_TRNS, KC_UP, KC_TRNS, LGUI(KC_PGUP), LCTL(KC_P),                               KC_DLR, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_PDOT,
               KC_END, KC_LEFT, KC_DOWN, KC_RGHT, LGUI(KC_PGDN), LCTL(KC_N),                              KC_PERC, KC_P4, KC_P5, KC_P6, KC_PCMM, KC_PENT,
               KC_LSFT, KC_TRNS, LCTL(KC_A), LCTL(KC_B), LCTL(KC_F), LCTL(KC_E),   KC_TRNS, KC_LGUI,      KC_PEQL, KC_P1, KC_P2, KC_P3, KC_P0, KC_RSFT,
                                                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
              ),
  [2] = LAYOUT(
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DQUO, KC_TRNS,                                      KC_TRNS, KC_DQUO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, KC_LT,                                        KC_GT, KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LPRN, KC_SLSH,                                      KC_BSLS, KC_RPRN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, KC_SCLN, KC_PEQL, KC_PPLS, KC_LCBR, KC_GRV,        KC_TRNS, MO(4),                KC_GRV, KC_RCBR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
              ),
  [3] = LAYOUT(
               KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,                                                  KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
               QK_BOOT, KC_RPRN, KC_AT, KC_HASH, KC_DLR, RM_TOGG,                                         QK_AUTOCORRECT_TOGGLE, KC_AMPR, KC_ASTR, KC_LPRN, KC_PERC, QK_BOOT,
               KC_UNDS, KC_MPRV, KC_MNXT, KC_VOLU, KC_PGUP, RM_NEXT,                                      QK_AUTO_SHIFT_TOGGLE, KC_HOME, RM_HUEU, RM_SATU, RM_VALU, KC_EQL,
               KC_MUTE, KC_MSTP, KC_MPLY, KC_VOLD, KC_PGDN, KC_MINS,    KC_TRNS, KC_TRNS,                 KC_PLUS, KC_END, RM_HUED, RM_SATD, RM_VALD, EE_CLR,
                                                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
              ),
  [4] = LAYOUT(
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, OS_HYPR, OS_MEH,                                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, KC_TRNS, KC_TRNS, OS_LCSG, OS_LCAG, OS_LSAG,   KC_TRNS, KC_TRNS,                  OS_RSAG, OS_RCAG, OS_RCSG, KC_TRNS, KC_TRNS, KC_TRNS,
                                                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
              )
};

#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C
