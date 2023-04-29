#pragma once

#include <Arduino.h>

class MusicPlayer {

  int currentNoteIndex = 0;
  int *melody = nullptr;
  int melodySize = 0;
  int buzzerPin = 0;
  int tempo = 0;

public:
  MusicPlayer(int *melody, int melodySize, int buzzerPin, int tempo = 120) {
    currentNoteIndex = 0;
    this->melody = melody;
    this->melodySize = melodySize;
    this->buzzerPin = buzzerPin;
    this->tempo = tempo;
  }
  void reset() { currentNoteIndex = 0; }
  void playNextNote() {
    if (currentNoteIndex >= melodySize)
      reset();

    const int wholenote = (60000 * 4) / tempo;
    int duration = 0;
    int adjustedDuration = 0;
    duration = melody[currentNoteIndex + 1];
    if (duration > 0) {
      adjustedDuration = wholenote / duration;
    } else if (duration < 0) {
      adjustedDuration = wholenote / abs(duration);
      adjustedDuration *= 1.5;
    }
    tone(buzzerPin, melody[currentNoteIndex], adjustedDuration * 0.9);
    delay(adjustedDuration);
    noTone(buzzerPin);

    currentNoteIndex += 2;
  }
};
