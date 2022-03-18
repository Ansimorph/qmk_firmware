// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H
#include "keymap_german_osx.h"
// https://github.com/qmk/qmk_firmware/blob/master/quantum/keymap_extras/keymap_german_osx.h

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Z │ U │ I │ O │ P │ Ü │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Esc│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ Ö │ Ä │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ - │Ctl│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │Bsp├───┐           ┌───┤Sft│
      *               └───┤Spc├───┐   ┌───┤Ent├───┘
      *                   └───┤ L1│   │L2 ├───┘
      *                       └───┘   └───┘
      */
    [0] = LAYOUT_split_3x6_3(
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, DE_Z, KC_U, KC_I, KC_O, KC_P, DE_UDIA,
        KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, DE_ODIA, DE_ADIA,
        OSM(MOD_LCTL), DE_Y, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, DE_MINS, OSM(MOD_RCTL),
        SFT_T(KC_BSPC), LALT_T(KC_SPC), OSL(1), OSL(2), CMD_T(KC_ENT), KC_RSFT
    ),


     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │ ^ │ ! │ " │ § │ $ │ % │       │ & │ / │ | │ \ │ = │ ? │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │   │ ß │   │   │   │       │lft│dwn│up │rgt│   │ # │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │ < │ [ │ { │ ( │ ` │       │ ' │ ) │ } │ ] │ > │   │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │   ├───┐           ┌───┤   │
      *               └───┤   ├───┐   ┌───┤   ├───┘
      *                   └───┤   │   │   ├───┘
      *                       └───┘   └───┘
      */
    [1] = LAYOUT_split_3x6_3(
        DE_CIRC, DE_EXLM, DE_DQUO, DE_SECT, DE_DLR, DE_PERC, DE_AMPR, DE_SLSH, DE_PIPE, DE_BSLS, DE_EQL, DE_QUES,
        _______, _______, DE_SS, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______, DE_HASH,
        _______, DE_LABK, DE_LBRC, DE_LCBR, DE_LPRN, DE_GRV, DE_QUOT, DE_RPRN, DE_RCBR, DE_RBRC, DE_RABK, _______,
        _______, _______, _______, _______, _______, _______
    ),

     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │   │   │   │   │   │   │       │ + │ 1 │ 2 │ 3 │ = │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │   │   │   │   │   │       │ - │ 4 │ 5 │ 6 │ / │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │   │   │   │   │   │       │ * │ 7 │ 8 │ 9 │ 0 │   │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │   ├───┐           ┌───┤   │
      *               └───┤   ├───┐   ┌───┤   ├───┘
      *                   └───┤   │   │   ├───┘
      *                       └───┘   └───┘
      */
    [2] = LAYOUT_split_3x6_3(
        _______, _______, _______, _______, _______, _______, DE_PLUS, KC_1, KC_2, KC_3, DE_EQL, _______,
        _______, _______, _______, _______, _______, _______, DE_MINS, KC_4, KC_5, KC_6, DE_SLSH, _______,
        _______, _______, _______, _______, _______, _______, DE_ASTR, KC_7, KC_8, KC_9, KC_0, _______,
        _______, _______, _______, _______, _______, _______
    )
};
