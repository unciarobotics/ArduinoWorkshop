// Test program for Slave

void setup() {
Serial.begin(9600);       //Start Serial Communication @9600 baud
}

void loop() {
if(Serial.available()>0)
{
 char val=Serial.read();  //read Serial data and store in val
 Serial.println(val);     //display data on Serial Monitor
}
}
