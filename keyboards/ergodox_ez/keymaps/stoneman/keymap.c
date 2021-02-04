#include "ergodox_ez.h"
#include "rgb_matrix_types.h"
#include "process_unicode_common.h"
#include "sendstring_uk.h"

#define KC_NONUS_TILD LSFT(KC_NONUS_HASH)
#define KC_NONUS_PIPE LSFT(KC_NONUS_BSLASH)
#define KC_LALT_HASH LALT_T(KC_NONUS_HASH)
#define KC_EMOJI LGUI(LCTL(KC_SPACE))
#define KC_ALT_LEFT LALT(LCTL(KC_F1))
#define KC_ALT_RIGHT LALT(LCTL(KC_F2))
#define KC_CTL_LEFT LALT(LCTL(KC_F3))
#define KC_CTL_RIGHT LALT(LCTL(KC_F4))

enum custom_keycodes {
    ALT_TAB = SAFE_RANGE,
    ALT_SHIFT_TAB,
    ALT_GRV,
    ALT_SHIFT_GRV,
    EMOJI_ANGRY,
    EMOJI_COOL,
    EMOJI_EYES,
    EMOJI_FINGERS_X,
    EMOJI_GRIN,
    EMOJI_HEARTS,
    EMOJI_JOY,
    EMOJI_LAUGH,
    EMOJI_MINDBLO,
    EMOJI_ROFL,
    EMOJI_SAD,
    EMOJI_SEENOEVIL,
    EMOJI_SHOCK,
    EMOJI_SHRUG,
    EMOJI_SMILE,
    EMOJI_TADA,
    EMOJI_THINKING,
    EMOJI_THUMBS_UP,
    EMOJI_WAVE,
    EMOJI_WINK,
    EMOJI_WINKTNG,
    MACRO_CHZ,
    MUTE_DOTA_TOGGLE,
    VIM_QUIT,
    VIM_SAVE,
    VIM_SAVE_QUIT,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      LSFT(KC_1),     LSFT(KC_2),     LSFT(KC_3),     LSFT(KC_4),     LSFT(KC_5),     KC_LCBR,                                        KC_RCBR,        LSFT(KC_6),     LSFT(KC_7),     LSFT(KC_8),     KC_LBRACKET,    KC_RBRACKET,    MUTE_DOTA_TOGGLE,
    KC_LALT_HASH,   KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_PLUS,                                        KC_NONUS_PIPE,  KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_GRAVE,
    LT(2,KC_TAB),   KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_QUOTE,       LGUI_T(KC_MINUS),
    LCTL(KC_Z),     LT(4,KC_Z),     KC_X,           KC_C,           KC_V,           KC_B,           KC_UNDS,                                        KC_EQUAL,       KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       LALT_T(KC_SCOLON),
    KC_LPRN,        KC_TRANSPARENT, KC_ENTER,       KC_LGUI,        KC_LCTRL,                                                                                                       MO(3),          KC_NONUS_TILD,  LCTL(KC_SPACE), KC_NONUS_BSLASH,KC_RPRN,
                                                                                                    MO(1),          KC_CAPSLOCK,    LALT(LGUI(LSFT(KC_LEFT))),LALT(LGUI(LSFT(KC_RIGHT))),
                                                                                                                    KC_TRANSPARENT, KC_F16,
                                                                                    KC_LSHIFT,      KC_BSPACE,      KC_DELETE,      KC_F17,         KC_ENTER,       KC_SPACE
  ),
  [1] = LAYOUT_ergodox_pretty(
    RESET,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          LALT(KC_PSCREEN),                               KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, VIM_QUIT,       VIM_SAVE,       VIM_SAVE_QUIT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F12,
    KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_F20),   KC_F18,         KC_F19,         LSFT(KC_F17),                                                                   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, EMOJI_SHRUG,    EMOJI_THINKING, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, EMOJI_HEARTS,   EMOJI_TADA,     EMOJI_WAVE,     EMOJI_COOL,     EMOJI_FINGERS_X,                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, EMOJI_ROFL,     EMOJI_JOY,      EMOJI_LAUGH,    EMOJI_WINK,                                                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_EMOJI,
    KC_TRANSPARENT, KC_TRANSPARENT, EMOJI_SHOCK,    EMOJI_ANGRY,    EMOJI_SAD,      EMOJI_WINKTNG,  EMOJI_EYES,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, EMOJI_MINDBLO,  EMOJI_SEENOEVIL,                                                                                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    EMOJI_THUMBS_UP,EMOJI_SMILE,    EMOJI_GRIN,     KC_TRANSPARENT, LALT(KC_ENTER), KC_TRANSPARENT
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_PLUS,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_ASTR,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_0,           KC_TRANSPARENT, KC_DOT,         KC_SLASH,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_AUDIO_VOL_UP,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,                                        KC_PGUP,        KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ALT_SHIFT_GRV,  ALT_GRV,        KC_TRANSPARENT,                                                                 LGUI(KC_LEFT),  KC_LEFT,        KC_DOWN,        KC_RIGHT,       LGUI(KC_RIGHT), KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, MACRO_CHZ,      ALT_SHIFT_TAB,  ALT_TAB,        KC_TRANSPARENT, KC_END,                                         KC_PGDOWN,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_LALT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LCTL
  ),
  [5] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_F7,                                          KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    KC_F8,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F10,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TAB,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_F11,         KC_Z,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F5,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_LALT,                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_DELETE,      KC_F9,          KC_AUDIO_MUTE,  KC_TRANSPARENT,
                                                                                                                    KC_LCTRL,       KC_AUDIO_VOL_UP,
                                                                                    KC_F6,          KC_BSPACE,      KC_LSHIFT,      KC_AUDIO_VOL_DOWN,KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {174,245,255}, {174,245,255}, {174,245,255}, {174,245,255}, {174,245,255}, {174,245,255}, {185,255,255}, {185,255,255}, {185,255,255}, {174,245,255}, {174,245,255}, {185,255,255}, {199,103,255}, {185,255,255}, {174,245,255}, {174,245,255}, {185,255,255}, {185,255,255}, {185,255,255}, {174,245,255}, {174,245,255}, {0,0,0}, {174,245,255}, {174,245,255}, {174,245,255}, {174,245,255}, {174,245,255}, {174,245,255}, {174,245,255}, {174,245,255}, {185,255,255}, {185,255,255}, {185,255,255}, {174,245,255}, {174,245,255}, {185,255,255}, {199,103,255}, {185,255,255}, {174,245,255}, {174,245,255}, {0,0,0}, {185,255,255}, {185,255,255}, {174,245,255}, {174,245,255}, {174,245,255}, {174,245,255}, {166,251,252} },

    [1] = { {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {154,255,255}, {154,255,255}, {154,255,255}, {105,255,255}, {105,255,255}, {105,255,255}, {105,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {105,255,255}, {105,255,255}, {0,0,0}, {0,0,0}, {105,255,255}, {105,255,255}, {105,255,255}, {105,255,255}, {0,0,0}, {105,255,255}, {105,255,255}, {105,255,255}, {105,255,255}, {0,0,0}, {105,255,255}, {105,255,255}, {105,255,255}, {105,255,255}, {0,0,0}, {105,255,255}, {105,255,255}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {154,255,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {154,255,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,255,255}, {154,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {154,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {154,255,255}, {154,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {0,0,0}, {0,0,0}, {0,0,255}, {154,255,255}, {154,255,255}, {154,255,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {0,255,255}, {0,255,255}, {10,255,255}, {35,255,255}, {10,255,255}, {0,255,255}, {0,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {0,255,255}, {0,255,255}, {10,255,255}, {35,255,255}, {10,255,255}, {0,255,255}, {0,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255} },

};

void set_layer_color(int layer) {
    for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (!hsv.h && !hsv.s && !hsv.v) {
            rgb_matrix_set_color( i, 0, 0, 0 );
        } else {
            RGB rgb = hsv_to_rgb( hsv );
            float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
            rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
        }
    }
}

// helpers

bool win_pressed = false;
bool shift_pressed = false;
bool alt_pressed = false;

uint8_t shift_swap_key = KC_TRANSPARENT;

uint8_t shift_combo_key = KC_TRANSPARENT;
const uint8_t *shift_combo_keycodes;

const uint8_t LBRACKET_NINE_SHIFT_COMBO[] = { KC_LBRACKET, KC_TRANSPARENT, KC_9, KC_TRANSPARENT };
const uint8_t RBRACKET_NINE_SHIFT_COMBO[] = { KC_RBRACKET, KC_TRANSPARENT, KC_0, KC_TRANSPARENT };

bool is_alt_tab_active = false;
bool is_alt_grv_active = false;
bool is_easy_win_shift_active = false;

void key_press(keyrecord_t *record, uint8_t keycode, uint8_t mod) {
    if (record->event.pressed) {
        if (mod != KC_TRANSPARENT) {
            register_code(mod);
        }
        register_code(keycode);
    } else {
        unregister_code(keycode);
        if (mod != KC_TRANSPARENT) {
            unregister_code(mod);
        }
    }
}

void shift_combo_key_up(void) {
    if (shift_pressed) {
        unregister_code(shift_combo_keycodes[2]);
        unregister_code(shift_combo_keycodes[3]);
        register_code(KC_LSFT);
    } else {
        unregister_code(shift_combo_keycodes[0]);
        unregister_code(shift_combo_keycodes[1]);
    }
    shift_combo_key = KC_TRANSPARENT;
}

bool shift_combo(keyrecord_t *record, uint8_t keycode, const uint8_t *keycodes) {
    if (record->event.pressed) {
        shift_combo_key = keycode;
        shift_combo_keycodes = keycodes;
        if (shift_pressed) {
            unregister_code(KC_LSFT);
            key_press(record, shift_combo_keycodes[2], shift_combo_keycodes[3]);
        } else {
            key_press(record, shift_combo_keycodes[0], shift_combo_keycodes[1]);
        }
    }
    else
    {
        shift_combo_key_up();
    }
    return false;
}

void cancel_shift_combo(uint8_t keycode, keyrecord_t *record) {
    if (shift_combo_key != KC_TRANSPARENT && shift_combo_key != keycode) {
        shift_combo_key_up();
    }
}

void shift_swap_key_up(void) {
    if (shift_pressed) {
        unregister_code(shift_swap_key);
        register_code(KC_LSFT);
    } else {
        unregister_code(shift_swap_key);
        unregister_code(KC_LSFT);
    }
    shift_swap_key = KC_TRANSPARENT;
}

void cancel_shift_swap(uint16_t keycode, keyrecord_t *record) {
    if (shift_swap_key != KC_TRANSPARENT && shift_swap_key != keycode) {
        shift_swap_key_up();
    }
}

bool shift_swap(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        shift_swap_key = keycode;
        if (shift_pressed) {
            unregister_code(KC_LSFT);
            register_code(keycode);
        } else {
            register_code(KC_LSFT);
            register_code(keycode);
        }
    } else {
        if (keycode == shift_swap_key) {
            shift_swap_key_up();
        }
    }
    return false;
}

// macros

bool process_macro_vim_q(keyrecord_t *record) {
    if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_ESCAPE) SS_DELAY(50) SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(100) SS_TAP(X_Q)  SS_DELAY(50) SS_TAP(X_ENTER));
    }
    return true;
}

bool process_macro_vim_s(keyrecord_t *record) {
    if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_ESCAPE) SS_DELAY(50) SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(50) SS_TAP(X_W)  SS_DELAY(50) SS_TAP(X_ENTER));
    }
    return true;
}

bool process_macro_vim_sq(keyrecord_t *record) {
    if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_ESCAPE) SS_DELAY(50) SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(50) SS_TAP(X_W)  SS_DELAY(50) SS_TAP(X_Q) SS_DELAY(50) SS_TAP(X_ENTER));
    }
    return true;
}

bool process_macro_vim_chz(keyrecord_t *record) {
    if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_2) SS_DELAY(50) SS_TAP(X_SLASH) SS_DELAY(50) SS_LSFT(SS_TAP(X_B))  SS_DELAY(50) SS_TAP(X_ENTER));
    }
    return true;
}

// modifiers

bool process_win(keyrecord_t *record) {
    win_pressed = record->event.pressed;
    if (is_easy_win_shift_active) {
      is_easy_win_shift_active = false;
      unregister_code(KC_LSFT);
    }
    return true;
}

bool process_shift(keyrecord_t *record) {
    shift_pressed = record->event.pressed;
    return true;
}

bool process_alt(keyrecord_t *record) {
    alt_pressed = record->event.pressed;
    return true;
}

// other

bool process_alt_tab(keyrecord_t *record, bool withShift) {
    if (is_alt_grv_active) {
        return true;
    }
    if (record->event.pressed) {
        if (!is_alt_tab_active) {
            is_alt_tab_active = true;
            register_code(KC_LALT);
        }
        if (withShift) {
            register_code(KC_LSFT);
        }
        register_code(KC_TAB);
    } else {
        unregister_code(KC_TAB);
        if (withShift) {
            unregister_code(KC_LSFT);
        }
    }
    return true;
}

bool process_alt_grv(keyrecord_t *record, bool withShift) {
    if (is_alt_tab_active) {
        return true;
    }
    if (record->event.pressed) {
        if (!is_alt_grv_active) {
            is_alt_grv_active = true;
            register_code(KC_LALT);
        }
        if (withShift) {
            register_code(KC_LSFT);
        }
        register_code(KC_GRAVE);
    } else {
        unregister_code(KC_GRAVE);
        if (withShift) {
            unregister_code(KC_LSFT);
        }
    }
    return true;
}

bool process_magic_z(keyrecord_t *record) {
    if (!record->event.pressed) {
        if (is_alt_tab_active || is_alt_grv_active) {
            unregister_code(KC_LALT);
            is_alt_tab_active = false;
            is_alt_grv_active = false;
        }
    }
    return true;
}

bool process_caps_lock(keyrecord_t *record) {
    if (!record->event.pressed) {
        wait_ms(200); // delay so MacOS doesn't think it's just a joke
    }
    return true;
}

bool process_emoji(uint16_t keycode, keyrecord_t *record) {
    bool is_mac = get_unicode_input_mode() == UC_MAC;
    if (record->event.pressed) {
        switch(keycode) {
            case EMOJI_ANGRY:
                is_mac ? send_unicode_hex_string("D83D+DE21") : send_unicode_string("😡");
                break;
            case EMOJI_COOL:
                is_mac ? send_unicode_hex_string("D83D+DE0E") : send_unicode_string("😎");
                break;
            case EMOJI_EYES:
                is_mac ? send_unicode_hex_string("D83D DC40") : send_unicode_string("👀");
                break;
            case EMOJI_FINGERS_X:
                is_mac ? send_unicode_hex_string("D83E+DD1E") : send_unicode_string("🤞");
                break;
            case EMOJI_GRIN:
                is_mac ? send_unicode_hex_string("D83D+DE01") : send_unicode_string("😁");
                break;
            case EMOJI_HEARTS:
                is_mac ? send_unicode_hex_string("D83D+DE0D") : send_unicode_string("😍");
                break;
            case EMOJI_JOY:
                is_mac ? send_unicode_hex_string("D83D+DE02") : send_unicode_string("😂");
                break;
            case EMOJI_LAUGH:
                is_mac ? send_unicode_hex_string("D83D+DE06") : send_unicode_string("😆");
                break;
            case EMOJI_MINDBLO:
                is_mac ? send_unicode_hex_string("D83E+DD2F") : send_unicode_string("🤯");
                break;
            case EMOJI_ROFL:
                is_mac ? send_unicode_hex_string("D83E+DD23") : send_unicode_string("🤣");
                break;
            case EMOJI_SAD:
                is_mac ? send_unicode_hex_string("D83D+DE41") : send_unicode_string("🙁");
                break;
            case EMOJI_SEENOEVIL:
                is_mac ? send_unicode_hex_string("D83D+DE48") : send_unicode_string("🙈");
                break;
            case EMOJI_SHOCK:
                is_mac ? send_unicode_hex_string("D83D+DE32") : send_unicode_string("😲");
                break;
            case EMOJI_SHRUG:
                is_mac ? send_unicode_hex_string("D83E+DD37") : send_unicode_string("🤷");
                break;
            case EMOJI_SMILE:
                is_mac ? send_unicode_hex_string("D83D+DE42") : send_unicode_string("🙂");
                break;
            case EMOJI_TADA:
                is_mac ? send_unicode_hex_string("D83C+DF89") : send_unicode_string("🎉");
                break;
            case EMOJI_THINKING:
                is_mac ? send_unicode_hex_string("D83E+DD14") : send_unicode_string("🤔");
                break;
            case EMOJI_THUMBS_UP:
                is_mac ? send_unicode_hex_string("D83D+DC4D") : send_unicode_string("👍");
                break;
            case EMOJI_WAVE:
                is_mac ? send_unicode_hex_string("D83D+DC4B") : send_unicode_string("👋");
                break;
            case EMOJI_WINK:
                is_mac ? send_unicode_hex_string("D83D+DE09") : send_unicode_string("😉");
                break;
            case EMOJI_WINKTNG:
                is_mac ? send_unicode_hex_string("D83D+DE1C") : send_unicode_string("😜");
                break;
        }
    }
    return false;
}

bool process_tab(keyrecord_t *record) {
    if (!win_pressed) {
        return true;
    }
    is_easy_win_shift_active = record->event.pressed;
    key_press(record, KC_LSFT, KC_TRANSPARENT);
    return false;
}

bool is_dota_toggle = false;

bool process_mute_dota_toggle(keyrecord_t *record) {
    if (record->event.pressed) {
        if (alt_pressed) {
            is_dota_toggle = true;
            if (layer_state_is(5)) {
                layer_off(5);
            } else {
                layer_on(5);
            }
        } else {
            register_code(KC_LALT);
            register_code(KC_F6);
        }
    } else {
        if (is_dota_toggle) {
            is_dota_toggle = false;
        } else {
            unregister_code(KC_F6);
            unregister_code(KC_LALT);
        }
    }
    return false;
}

void suspend_power_down_user(void) {
    rgb_matrix_set_suspend_state(true);
}

void suspend_wakeup_init_user(void) {
    set_unicode_input_mode(UC_WINC);
    rgb_matrix_set_suspend_state(false);
}

void eeconfig_init_user(void) {
    set_unicode_input_mode(UC_WINC);
}

// cancel overrides if an unexpected key has been pressed
void cancel_overrides(uint16_t keycode, keyrecord_t *record) {
    cancel_shift_swap(keycode, record);
    cancel_shift_combo(keycode, record);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    cancel_overrides(keycode, record);
    switch (keycode) {
        // macros
        case VIM_QUIT:
            return process_macro_vim_q(record);
        case VIM_SAVE:
            return process_macro_vim_s(record);
        case VIM_SAVE_QUIT:
            return process_macro_vim_sq(record);
        case MACRO_CHZ:
            return process_macro_vim_chz(record);
        // modifiers
        case KC_LGUI:
            return process_win(record);
        case KC_LSHIFT:
            return process_shift(record);
        case LALT_T(KC_SCOLON):
            return process_alt(record);
        case KC_CAPSLOCK:
            return process_caps_lock(record);
        // top row numbers
        case LSFT(KC_1):
        case LSFT(KC_2):
        case LSFT(KC_3):
        case LSFT(KC_4):
        case LSFT(KC_5):
        case LSFT(KC_6):
        case LSFT(KC_7):
        case LSFT(KC_8):
            return shift_swap(keycode, record);
        case KC_LBRACKET:
            return shift_combo(record, keycode, LBRACKET_NINE_SHIFT_COMBO);
        case KC_RBRACKET:
            return shift_combo(record, keycode, RBRACKET_NINE_SHIFT_COMBO);
        // app switching
        case ALT_TAB:
            return process_alt_tab(record, false);
        case ALT_SHIFT_TAB:
            return process_alt_tab(record, true);
        case ALT_GRV:
            return process_alt_grv(record, false);
        case ALT_SHIFT_GRV:
            return process_alt_grv(record, true);
        case LT(4,KC_Z):
            return process_magic_z(record);
        // emoji
        case EMOJI_ANGRY:
        case EMOJI_COOL:
        case EMOJI_EYES:
        case EMOJI_FINGERS_X:
        case EMOJI_GRIN:
        case EMOJI_HEARTS:
        case EMOJI_JOY:
        case EMOJI_LAUGH:
        case EMOJI_MINDBLO:
        case EMOJI_ROFL:
        case EMOJI_SAD:
        case EMOJI_SEENOEVIL:
        case EMOJI_SHOCK:
        case EMOJI_SHRUG:
        case EMOJI_SMILE:
        case EMOJI_TADA:
        case EMOJI_THINKING:
        case EMOJI_THUMBS_UP:
        case EMOJI_WAVE:
        case EMOJI_WINK:
        case EMOJI_WINKTNG:
            return process_emoji(keycode, record);
        // other
        case LT(2,KC_TAB):
            return process_tab(record);
        case MUTE_DOTA_TOGGLE:
            return process_mute_dota_toggle(record);
    }
    return true;
}

enum raw_hid_command_ids
{
    set_rgb = 0x01
};

const uint8_t NO_RAW_HID_OVERRIDE = 255;
uint8_t raw_hid_rgb_amimation_override = NO_RAW_HID_OVERRIDE;

void rgb_matrix_indicators_user(void) {
    // bool is_mac = get_unicode_input_mode() == UC_MAC;
    switch (biton32(layer_state)) {
        case 0:
            //
            // TODO: Figure out why setting rgb matrix modes is not working having updated QMK
            //
            // if (is_mac && raw_hid_rgb_amimation_override != NO_RAW_HID_OVERRIDE) {
            //     rgb_matrix_mode_noeeprom(raw_hid_rgb_amimation_override);
            //     return;
            // } else {
                set_layer_color(0);
            // }
            break;
        case 1:
            set_layer_color(1);
            break;
        case 2:
            set_layer_color(2);
            break;
        case 3:
            set_layer_color(3);
            break;
        case 4:
            set_layer_color(4);
            break;
        case 5:
            set_layer_color(5);
            break;
        default:
            if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
                rgb_matrix_set_color_all(0, 0, 0);
            }
            break;
    }
}

void raw_hid_receive(uint8_t *data, uint8_t length) {
    set_unicode_input_mode(UC_MAC);
    switch (data[0])
    {
        case set_rgb:
            raw_hid_rgb_amimation_override = data[1];
            break;
    }
}

bool mac_input_mode_switched = false;

layer_state_t layer_state_set_user(layer_state_t state) {
    bool is_mac = get_unicode_input_mode() == UC_MAC;
    switch (get_highest_layer(state)) {
    case 2:
        if (is_mac) {
            SEND_STRING(SS_LCMD(SS_LALT(SS_LCTL(SS_LSFT(SS_TAP(X_SPACE))))));
            mac_input_mode_switched = true;
        }
        break;
    default:
        if (mac_input_mode_switched) {
            SEND_STRING(SS_LCMD(SS_LALT(SS_LCTL(SS_LSFT(SS_TAP(X_SPACE))))));
            mac_input_mode_switched = false;
        }
        break;
    }
  return state;
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(4,KC_Z):
            return 250;
        default:
            return TAPPING_TERM;
    }
}
