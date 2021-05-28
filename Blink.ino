
void setup() {
  
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(25200000);                       // wait for 7 Hours
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(61200000);                       // wait for 17 Hours
}
