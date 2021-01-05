void setup() 
{
  // Begin the Serial at 9600 Baud
  Serial.begin(9600);
}

void loop() 
{

  int value = Serial.read();    //Assigns "Value" as a int that reads the serial
  Serial.println(value);        //Prints Int
  delay(50);                    //Delay for stablity
  
}                 
 
