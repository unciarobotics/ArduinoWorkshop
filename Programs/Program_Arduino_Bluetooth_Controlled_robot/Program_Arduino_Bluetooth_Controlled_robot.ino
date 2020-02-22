/*
 * EDGE AVOIDER ROBOT
 * Avoids edges and prevents itself from falling down
 */
const int Lmotor1 = 6;            //constants to store motor pins
const int Lmotor2 = 9;
const int Rmotor1 = 10;
const int Rmotor2 = 11;

char incomingByte;

void setup() {
Serial.begin(9600);
pinMode(Lmotor1,OUTPUT);
pinMode(Lmotor2,OUTPUT);
pinMode(Rmotor1,OUTPUT);
pinMode(Rmotor2,OUTPUT);
}

void loop() {
 if (Serial.available()>0)
  {
    incomingByte = Serial.read();
    
    switch(incomingByte)
    {
      case 'u' : Serial.println("Forward");moveforward();break;
      case 'd' : Serial.println("Backward");movebackward();break;
      case 'r' : Serial.println("Right");moveright();break;
      case 'l' : Serial.println("Left");moveleft();break;
      case 'h' : Serial.println("forward");halt();break;
      default  : break;
    }
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

void halt()
{
  digitalWrite(Lmotor1,LOW);     //stop
  digitalWrite(Lmotor2,LOW); 
  digitalWrite(Rmotor1,LOW);
  digitalWrite(Rmotor2,LOW);
}

void movebackward()
{ digitalWrite(Lmotor1,LOW);     //reverse
  digitalWrite(Lmotor2,HIGH); 
  digitalWrite(Rmotor1,LOW);
  digitalWrite(Rmotor2,HIGH);
}
