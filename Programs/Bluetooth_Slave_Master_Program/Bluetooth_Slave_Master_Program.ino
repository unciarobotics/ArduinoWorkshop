//Test Program for Master

void setup() {
Serial.begin(9600); //start serial communication
}

void loop() {
Serial.write("a");  //Transmit alphabet 'a'
}
