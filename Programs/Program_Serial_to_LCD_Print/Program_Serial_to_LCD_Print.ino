#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);     // LCD columns and rows
  Serial.begin(9600);   // initialize the serial communications:
}

void loop() {
  if (Serial.available()) {           //check for data on Serial Port
    delay(100);                       //wait a bit
    lcd.clear();                      // clear the screen
    while (Serial.available() > 0) {  // read all the available characters
      lcd.write(Serial.read());       // display characters received
    }
  }
}
