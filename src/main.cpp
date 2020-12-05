/**
 *
 * Mercury Smart Shelf
 * HX711 load cell amplifier with Arduino
 * https://github.com/Mercury-Smartstores/Mercury-Smart-Shelf
 *
 * This file uses the HX711 library from Bogdan Necula.
 *
 * MIT License
 * (c) 2020 Mercury
 *
**/
#include <Arduino.h>
#include <HX711.h>


const int LOADCELL_DOUT_PIN = A1;
const int LOADCELL_SCK_PIN = A0;

const float LOADCELL_DIVIDER = 1; // Real weight = Weight read / LOADCELL_DIVIDER

const byte READINGS = 10;

const HX711 loadcell;


void setup() {
    Serial.begin(9600);
    loadcell.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
    loadcell.set_scale(LOADCELL_DIVIDER); // Scale = Weight read / Real weight
    loadcell.tare();
}

void loop() {
    Serial.println(loadcell.get_units(READINGS));
}