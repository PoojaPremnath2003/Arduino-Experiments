void setup() {
  // put your setup code here, to run once:
  //to initialize the digital pin 13 as the output
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //the loop runs over and over again forever
  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  delay(100);
  digitalWrite(11,LOW);
}
