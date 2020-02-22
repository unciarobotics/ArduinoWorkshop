// constants to name the pins
const int Red = 9;
const int Green = 10;
const int Blue = 11;

void setup() {
}
void loop() {
analogWrite(Red,255);   //Glow Red
analogWrite(Green,0);
analogWrite(Blue,0);
delay(1000);
analogWrite(Red,0);
analogWrite(Green,255); //Glow Green
analogWrite(Blue,0);
delay(1000);
analogWrite(Red,0);
analogWrite(Green,0);
analogWrite(Blue,255);  //Glow Blue
delay(1000);
}
