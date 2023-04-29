#pragma once

#include "notes.hpp"

// Dart Vader theme (Imperial March) - Star wars

// notes of the melody followed by the duration.
// [note1, duration1, note2, duration2, ...]
// a 4 means a quarter note, 8 an eighteenth , 16 sixteenth, so on
// !!negative numbers are used to represent dotted notes,
// so -4 means a dotted quarter note, that is, a quarter plus an eighteenth!!
int imperialMelody[] = {
    NOTE_A4,  4,  NOTE_A4, 4,  NOTE_A4,  4,   NOTE_F4, -8, NOTE_C5,  16,

    NOTE_A4,  4,  NOTE_F4, -8, NOTE_C5,  16,  NOTE_A4, 2, // 4
    NOTE_E5,  4,  NOTE_E5, 4,  NOTE_E5,  4,   NOTE_F5, -8, NOTE_C5,  16,
    NOTE_A4,  4,  NOTE_F4, -8, NOTE_C5,  16,  NOTE_A4, 2,

    NOTE_A5,  4,  NOTE_A4, -8, NOTE_A4,  16,  NOTE_A5, 4,  NOTE_GS5, -8,
    NOTE_G5,  16, // 7
    NOTE_DS5, 16, NOTE_D5, 16, NOTE_DS5, 8,   REST,    8,  NOTE_A4,  8,
    NOTE_DS5, 4,  NOTE_D5, -8, NOTE_CS5, 16,

    NOTE_C5,  16, NOTE_B4, 16, NOTE_C5,  16,  REST,    8,  NOTE_F4,  8,
    NOTE_GS4, 4,  NOTE_F4, -8, NOTE_A4,  -16, // 9
    NOTE_C5,  4,  NOTE_A4, -8, NOTE_C5,  16,  NOTE_E5, 2,

    NOTE_A5,  4,  NOTE_A4, -8, NOTE_A4,  16,  NOTE_A5, 4,  NOTE_GS5, -8,
    NOTE_G5,  16, // 7
    NOTE_DS5, 16, NOTE_D5, 16, NOTE_DS5, 8,   REST,    8,  NOTE_A4,  8,
    NOTE_DS5, 4,  NOTE_D5, -8, NOTE_CS5, 16,

    NOTE_C5,  16, NOTE_B4, 16, NOTE_C5,  16,  REST,    8,  NOTE_F4,  8,
    NOTE_GS4, 4,  NOTE_F4, -8, NOTE_A4,  -16, // 9
    NOTE_A4,  4,  NOTE_F4, -8, NOTE_C5,  16,  NOTE_A4, 2,
};
