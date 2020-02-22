/*
 * INTERFACE ACCELEROMETER WITH ARDUINO
 * --------------------------------------------------
 * This program reads values of X, Y and Z axis of the accelerometer
 * and display them on Serial Monitor
 *
 */
int xPin = A0;           //define X,y and Z axis pins
int yPin = A1;
int zPin = A2;

int xVal, yVal, zVal;   //variables to store data of x, y and z axis

void setup() {
Serial.begin(9600);     //Start Serial monitor
}

void loop() {
xVal=analogRead(A0);    //read value from x axis
yVal=analogRead(A1);    //read value from y axis
zVal=analogRead(A2);    //read value from z axis

Serial.print("x: ");Serial.print(xVal);Serial.print('\t'); //print all the values on Serial Monitor
Serial.print("y: ");Serial.print(yVal);Serial.print('\t');
Serial.print("z: ");Serial.print(zVal);Serial.println("");

}
