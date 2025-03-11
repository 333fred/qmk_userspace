#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define LAYOUT_MIRROR( \
    k00, k01, k02, k03, k04, k05, \
    k10, k11, k12, k13, k14, k15, \
    k20, k21, k22, k23, k24, k25, \
    k30, k31, k32, k33, k34, k35, \
    k40, k41, k42, k43, k44, k45  \
    ) \
    LAYOUT( \
      k00, k01, k02, k03, k04, k05, k00, k01, k02, k03, k04, k05, \
      k10, k11, k12, k13, k14, k15, k10, k11, k12, k13, k14, k15, \
      k20, k21, k22, k23, k24, k25, k20, k21, k22, k23, k24, k25, \
      k30, k31, k32, k33, k34, k35, k30, k31, k32, k33, k34, k35, \
      k40, k41, k42, k43, k44, k45, k40, k41, k42, k43, k44, k45  \
    )

// Tap dance for layer transitions
// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* BASE
 * ,-----------------------------------------,
 * |  F9  |  F10 | NUM  | SLSH | STAR | MINS |
 * |------+------+------+------+------+------|
 * |  F7  |  F8  |  7   |  8   |  0   | PLUS |
 * |------+------+------+------+------+------|
 * |  F5  |  F6  |  4   |  5   |  6   |  ^   |
 * |------+------+------+------+------+------|
 * |  F3  |  F4  |  1   |  2   |  3   |  =   |
 * |------+------+------+------+------+------|
 * |  F1  |  F2  |  0   |  ,   |  .   | Ent  |
 * `-----------------------------------------'
 */
[0] = LAYOUT_MIRROR( \
  KC_F9,   KC_F10,  KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS, \
  KC_F7,   KC_F8,   KC_P7,   KC_P8,   KC_P9,   KC_PPLS, \
  KC_F5,   KC_F6,   KC_P4,   KC_P5,   KC_P6,   KC_CIRC, \
  KC_F3,   KC_F4,   KC_P1,   KC_P2,   KC_P3,   KC_PEQL, \
  KC_F1,   KC_F2,   KC_P0,   KC_PCMM, KC_PDOT, KC_PENT \
)
};
