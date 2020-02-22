#define trigPin 12
#define echoPin 13

const int Lmotor1 = 6;            //constants to store motor pins
const int Lmotor2 = 9;
const int Rmotor1 = 10;
const int Rmotor2 = 11;

int reverseDelay = 1000;        //change delay values according to your robot
int turnDelay = 500;

void setup()
{
  Serial.begin(9600);       //start serial communication
  pinMode(trigPin,OUTPUT);  //set trigger pin as output 
  pinMode(echoPin,INPUT);   //set echo pin as input
}

void loop()
{
  int duration, distance;     // variables to store duration and distance
  digitalWrite(trigPin,HIGH); // turn on trigger pin
  delayMicroseconds(10);      // wait 10 seconds
  digitalWrite(trigPin,LOW);  // turn off trigger pin 
  duration = pulseIn(echoPin,HIGH); //store the duration for echo
  distance= (duration/2)/29.1;      //calculate the distance
  Serial.print(distance);           //print distance on serial moitor
  Serial.println("cm");
  if (distance<=30)
  { movebackward();
    Serial.println("turning");
    delay(reverseDelay);             //give time to reverse
    moveright();                     //turn right
    delay(turnDelay);                //give time to turn 
  }
  else
  {
    moveforward();
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
