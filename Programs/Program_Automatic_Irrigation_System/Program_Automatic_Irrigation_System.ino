/*
 * IRRIGATION SYSTEM USING SOIL MOISTURE SENSOR
 * --------------------------------------------------
 * This program reads the readings of a soil moisture sensor
 * and moisture of the soil is not as expected, it will turn on the 
 * water pump
 */
 
int sensor_pin = A0;        //name of the sensor pin to use
int pump = 13;              //name of the water pump pin
int val = 0;                //variable to store sensor readings

int requiredMoisture = 100; //Enter value for required moisture

void setup() {
Serial.begin(9600);
}

void loop() {
val = analogRead(A0);       //start reading values fro the sensor
Serial.println(val);        //print these values on Serial Monitor

if(val<requiredMoisture)    //if moisture is less than requred value
{digitalWrite(13,HIGH);}    //Turn on the water pump

}
