/*
 * SOIL MOISTURE SENSOR
 * ----------------------------
 * This program reads the readings of a soil moisture sensor
 * and display them on serial monitor
 * 
 */
 
int sensor_pin = A0;      //name of the sensor pin to use
int val = 0;              //variable to store sensor readings
void setup() {
Serial.begin(9600);
}

void loop() {
val = analogRead(A0);     //start reading values fro the sensor
Serial.println(val);      //print these values on Serial Monitor
}
