/*
 * CONTROLING LED USING Voice COMMANDS
 * -------------------------------------
 * This example demonstrates how we can control a LED using voice commands
 * with the help of Bluetooth HC-05
 * 
 */

const int LED = 13;                //declare LED pin
String val;                        //variable to store data from bluetooth                      
void setup() {
Serial.begin(9600);               //start serial communication
pinMode(LED,OUTPUT);              //set pinmode as output
}

void loop() {
if(Serial.available()>0)                //check if it is receiving data or not
 { val = Serial.readStringUntil('\n');  //read and store data inside val
   Serial.println(val);
   if((val=="turn on the light")||(val=="turn on"))      
   {
    digitalWrite(LED,HIGH);
    Serial.println("LED ON");
   }
   if((val=="turn of the light")||(val=="turn off")) 
   {
    digitalWrite(LED,LOW);
    Serial.println("LED OFF");
    }
  }

}
