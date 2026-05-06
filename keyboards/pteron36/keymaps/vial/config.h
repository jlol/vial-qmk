#pragma once

#define VIAL_KEYBOARD_UID {0xD6, 0x68, 0xF2, 0x55, 0x9B, 0x48, 0x07, 0x6E}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 4 }

#ifndef TAPPING_TERM_PER_KEY
	#define TAPPING_TERM_PER_KEY
#endif

//#define IGNORE_MOD_TAP_INTERRUPT
#define CHORDAL_HOLD

//#define PERMISSIVE_HOLD: (Optional) Use this only if you find you are too fast for your Shift keys. It makes the hold trigger immediately if you tap another key while holding Shift.


#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define DYNAMIC_KEYMAP_MACRO_COUNT 0 // Increase if you use many text strings
#define VIAL_COMBO_ENTRIES 8        // Highly recommended for 34-key boards
#define VIAL_TAP_DANCE_ENTRIES 4    // Double the default tap dance slots
