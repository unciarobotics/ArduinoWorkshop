/*
 * ACCELEROMETER CONTROLLED ROBOT
 * This robot receives data over bluetooth and moves the robot in
 * particula direction accordingly
 */
 
int xPin=A0;      //variable to store x axis
int yPin=A1;      //variable to store y axis


void setup(){
  Serial.begin(9600);   //start serial port
}


void loop() 
{
  int xval=analogRead(xPin);  //read value from x axis
  int yval=analogRead(yPin);  //read value from y axis

  if ((xval>325 && xval<330) && (yval>320 && yval<335)) //stop
  {
    //Serial.println("stop");
    Serial.write("s");
  } 

  else 
  { 
    if ((xval>330 && xval<342) && (yval>320 && yval<335)) //forward
   {
     //Serial.println("forward");
     Serial.write("f");
      
    }
    if ((xval>267 && xval<320) && (yval>320 && yval<335)) //backward
  {
   //Serial.println("backward");
   Serial.write("b");
      
    }   

    if ((xval>332 && xval<334) && (yval>335 && yval<385)) //left
    {
     //Serial.println("left");
     Serial.write("l");
     }


    if ((xval>332 && xval<334) && (yval>273 && yval<325))//right
    {
    // Serial.println("right");
     Serial.write("r");
      
    }
  }
  Serial.flush();
}
