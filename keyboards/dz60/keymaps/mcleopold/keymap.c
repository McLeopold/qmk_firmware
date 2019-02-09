#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	LAYOUT(
		KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_NO, KC_BSPC,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
		KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSPO, KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSPC, KC_NO,
		KC_LCTL, KC_LGUI, KC_LALT, MO(2), MO(4), KC_SPC, KC_RALT, KC_RGUI, KC_NO, KC_APP, KC_RCTL),

	LAYOUT(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, _______, _______, _______,
		KC_BSPC, _______, KC_R, KC_S, KC_T, KC_D, _______, KC_N, KC_E, KC_I, KC_O, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, KC_K, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),

	LAYOUT(
		KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______, KC_DEL,
		_______, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, _______, _______, KC_HOME, KC_UP, KC_END, KC_PSCR, KC_SLCK, KC_BRK, _______,
		KC_DEL, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, _______, KC_PGUP, KC_LEFT, KC_DOWN, KC_RIGHT, KC_INS, KC_DEL, _______,
		_______, KC_ACL0, KC_ACL1, KC_ACL2, _______, _______, _______, KC_PGDN, _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, KC_CAPS, _______),

	LAYOUT(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, KC_SPC, _______, MO(2), _______, _______, _______, _______, _______),

	LAYOUT(
		_______, DF(0), DF(1), _______, _______, _______, _______, _______, _______, _______, _______, RGB_HUD, RGB_HUI, _______, RGB_TOG,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_SAD, RGB_SAI, RGB_M_B,
		TG(3), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_VAD, RGB_VAI, RGB_M_P, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),

};
