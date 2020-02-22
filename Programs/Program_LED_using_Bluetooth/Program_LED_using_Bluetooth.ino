/*
 * CONTROLING LED USING BLUETOOTH
 * -------------------------------------
 * This example demonstrates how we can control a LED using Mobile App
 * with the help of Bluetooth HC-05
 * 
 */

const int LED = 13;                //declare LED pin
char val;                         //variable to store data from bluetooth                      
void setup() {
Serial.begin(9600);               //start serial communication
pinMode(LED,OUTPUT);              //set pinmode as output
}

void loop() {
if(Serial.available()>0)          //check if it is receiving data or not
 { val = Serial.read();           //read and store data inside val
   Serial.println(val);
   if(val=='1')                   //if 1 is received turn on the LED
   {
    digitalWrite(LED,HIGH);
    Serial.println("LED ON");
   }
   if(val=='0')                   //if 0 is received turn off the LED
   {
    digitalWrite(LED,LOW);
    Serial.println("LED OFF");
    }
  }

}
