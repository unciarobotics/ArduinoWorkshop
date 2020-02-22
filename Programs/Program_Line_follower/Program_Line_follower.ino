/*
 * LINE FOLLOWER ROBOT
 * Follows a black lline on White surface using sensors connected at pin 12 and 13 of Arduino
 */
const int Lmotor1 = 6;
const int Lmotor2 = 9;
const int Rmotor1 = 10;
const int Rmotor2 = 11;
const int Lsensor = 12;
const int Rsensor = 13;

void setup() {
pinMode(Lmotor1,OUTPUT);
pinMode(Lmotor2,OUTPUT);
pinMode(Rmotor1,OUTPUT);
pinMode(Rmotor2,OUTPUT);
pinMode(Lsensor,INPUT);
pinMode(Rsensor,INPUT);
}

void loop() {
int Lvalue = digitalRead(Lsensor);  //read the value from left sensor
int Rvalue = digitalRead(Rsensor);  //read the value from right sensor

if(Lvalue==HIGH&&Rvalue==HIGH)      //if both sensors are on white
  { digitalWrite(Lmotor1,HIGH);     //move forward
    digitalWrite(Lmotor2,LOW); 
    digitalWrite(Rmotor1,HIGH);
    digitalWrite(Rmotor2,LOW);
  }
  
if(Lvalue==HIGH&&Rvalue==LOW)       //if only left sensor is on white
  { digitalWrite(Lmotor1,HIGH);     //take turn left/right
    digitalWrite(Lmotor2,LOW); 
    digitalWrite(Rmotor1,LOW);
    digitalWrite(Rmotor2,LOW);
  }
  
if(Lvalue==LOW&&Rvalue==HIGH)       //if only right sensor is on white
  { digitalWrite(Lmotor1,LOW);      //take turn left/right
    digitalWrite(Lmotor2,LOW); 
    digitalWrite(Rmotor1,HIGH);
    digitalWrite(Rmotor2,LOW);
  }

if(Lvalue==LOW&&Rvalue==LOW)      //if both sensors are on black
  { digitalWrite(Lmotor1,LOW);     //stop
    digitalWrite(Lmotor2,LOW); 
    digitalWrite(Rmotor1,LOW);
    digitalWrite(Rmotor2,LOW);
  }

}
