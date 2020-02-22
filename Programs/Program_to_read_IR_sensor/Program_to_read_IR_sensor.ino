/* 
 *  IR sensor module to Serial
 * Read values from IR sensor Module connected on pin 2 of arduino.
 * Note: We are using digital IR sensor Module in this Example
 */
const int IR = 2;     //IR sensor signal pin
void setup() {
Serial.begin(9600);   //start Serial commuication at 9600 baud rate
pinMode(IR,INPUT);
}

void loop() {
int val = digitalRead(IR);  //read value and store it in val

if (val==HIGH)              
{Serial.println("white surface");}

if (val==LOW)
{Serial.println("black surface");}

}
