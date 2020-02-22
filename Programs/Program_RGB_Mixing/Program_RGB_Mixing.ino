// variables to hold the LED color
int Rvalue = 254;
int Gvalue = 1;
int Bvalue = 127;
int Rdirection = -1;
int Gdirection = 1;
int Bdirection = -1;

// constants to name the pins
const int Red = 9;
const int Green = 10;
const int Blue = 11;

void setup() {
  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Blue, OUTPUT);
}

void loop() {
//send PWM signal on LEDs
analogWrite(Red, Rvalue);
analogWrite(Green, Gvalue);
analogWrite(Blue, Bvalue);

Rvalue = Rvalue + Rdirection;   //changing values of LEDs
Gvalue = Gvalue + Gdirection;   
Bvalue = Bvalue + Bdirection;  

//now change dirction for each color if it reaches 255
if (Rvalue>= 255 || Rvalue <= 0) 
  {Rdirection = Rdirection * -1;}
if (Gvalue>= 255 || Gvalue <= 0) 
  {Gdirection = Rdirection * -1;}
if (Bvalue>= 255 || Bvalue <= 0) 
  {Bdirection = Bdirection * -1;}
delay(10);
}
