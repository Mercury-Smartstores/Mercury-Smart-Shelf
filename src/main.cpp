#include <Arduino.h>
#include <HX711.h>


const int LOADCELL_DOUT_PIN = A1;
const int LOADCELL_SCK_PIN = A0;

// Scale = Weight read / Real weight
const long LOADCELL_DIVIDER = 5895655;

HX711 loadcell;

void setup() {
    Serial.begin(9600);

    loadcell.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
    loadcell.set_scale(LOADCELL_DIVIDER);
    loadcell.tare();
}

void loop() {
    Serial.print("Weight: ");
    Serial.println(loadcell.get_units(20));
    delay(1000);
}