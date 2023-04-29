#include <Arduino.h>
#include <LowPower.h>

#include "imperial_melody.hpp"
#include "music_player.hpp"

constexpr int DOOR_OPENED = 1;
constexpr int DOOR_CLOSED = 0;

const int BEEPER_PIN = 6;
const int SENSOR_PIN = 3;
int secondsElapsed = 0;
const int secondsToScream = 30; // 1 minuta
MusicPlayer musicPlayer{imperialMelody, sizeof(imperialMelody) / sizeof(int),
                        BEEPER_PIN};

void goToSleepAndWaitForDoorOpen();
void onWakeUp();

void setup() {
  Serial.begin(115200);
  pinMode(BEEPER_PIN, OUTPUT);
  pinMode(SENSOR_PIN, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(SENSOR_PIN), &onWakeUp, RISING);
}

bool isDoorOpen() { return digitalRead(SENSOR_PIN) == DOOR_OPENED; }

void loop() {
  if (!isDoorOpen()){
    musicPlayer.reset();
    secondsElapsed = 0;
    goToSleepAndWaitForDoorOpen();
  }
  
  if (isDoorOpen()) {
    delay(1000);
    secondsElapsed++;
  } else {
    secondsElapsed = 0;
  }

  if (secondsElapsed >= secondsToScream) {
    while (isDoorOpen()) {
      musicPlayer.playNextNote();
    }
  }
}

void goToSleepAndWaitForDoorOpen() {
  LowPower.powerDown(SLEEP_FOREVER, ADC_OFF, BOD_OFF);
  // NOTE after powerDown the device is sleeping
  // and will be waken up by pin interrupt on SENSOR_PIN rising (from low to
  // high) edge
}

void onWakeUp() {
  // NOTE intentionally empty
}


