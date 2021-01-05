void setup() 
{
  // Begin the Serial at 9600 Baud
  Serial.begin(9600);


}

void loop() 
{
  if(Serial.available( ) > 0) //Waits till serial buffer is low enough to send data
    {
      int i = 5;                //  Place holder for thumbstick value
                                //  Assign thumbstick to "i"
                                //  int i = analogRead(A0);
      Serial.write(i);          //  Writes value to serial 
      delay(50);                //  Delay for stability after writing to the serial 
    }
}
