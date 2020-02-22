/*
 * EDGE AVOIDER ROBOT
 * Avoids edges and prevents itself from falling down
 */
const int Lmotor1 = 6;            //constants to store motor pins
const int Lmotor2 = 9;
const int Rmotor1 = 10;
const int Rmotor2 = 11;
const int Lsensor = 12;         //constants to store sensor pins
const int Rsensor = 13;

int reverseDelay = 1000;        //change delay values according to your robot
int turnDelay = 500;

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

if(Lvalue==HIGH&&Rvalue==HIGH)       //if both sensors are on the table
 { moveforward();                  //move forward
  }

if(Lvalue==HIGH&&Rvalue==LOW)      //if only left sensor is on the table
 { movebackward();
   delay(reverseDelay);             //give time to reverse
   moveright();                     //turn right
   delay(turnDelay);                //give time to turn 
  }
 
  
if(Lvalue==LOW&&Rvalue==HIGH)       //if only right sensor is on the table
 { movebackward();
   delay(reverseDelay);             //give time to reverse
   moveleft();                      //turn left
   delay(turnDelay);                //give time to turn 
  }

if(Lvalue==LOW&&Rvalue==LOW)      //if both sensors are not on the table
 { movebackward();
   delay(reverseDelay);             //give time to reverse
   moveright();                     //turn right
   delay(turnDelay);                //give time to turn 
  }
}

void moveforward()
{ digitalWrite(Lmotor1,HIGH);     //move forward
  digitalWrite(Lmotor2,LOW); 
  digitalWrite(Rmotor1,HIGH);
  digitalWrite(Rmotor2,LOW);
}

void moveright()
{ digitalWrite(Lmotor1,HIGH);     //take right turn
  digitalWrite(Lmotor2,LOW); 
  digitalWrite(Rmotor1,LOW);
  digitalWrite(Rmotor2,LOW);
}

void moveleft()
{ digitalWrite(Lmotor1,LOW);     //take left turn
  digitalWrite(Lmotor2,LOW); 
  digitalWrite(Rmotor1,HIGH);
  digitalWrite(Rmotor2,LOW);
}

void movebackward()
{ digitalWrite(Lmotor1,LOW);     //reverse
  digitalWrite(Lmotor2,HIGH); 
  digitalWrite(Rmotor1,LOW);
  digitalWrite(Rmotor2,HIGH);
}
