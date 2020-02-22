#define trigPin 9
#define echoPin 10

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

  
}
