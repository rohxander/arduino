void setup() 
{
  pinMode(2, OUTPUT);    // sets the digital pin 13 as output
}

void loop() 
{
  digitalWrite(2, HIGH); // sets the digital pin 13 on
  delay(5000);            // waits for a second
  digitalWrite(2, LOW);  // sets the digital pin 13 off
  delay(5000);            // waits for a second
}
