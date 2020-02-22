/* Analog Read to Serial Monitor
 * Display the data received on analog pin A0 on Srial Monitor
 */

int potPin = A0;    //input pin for the potentiometer
int val = 0;      
void setup() {
  Serial.begin(9600);
}

void loop() {
  val = analogRead(potPin);    // read the value from the sensor
  Serial.println(val);         // print the values on serial monitor
}
