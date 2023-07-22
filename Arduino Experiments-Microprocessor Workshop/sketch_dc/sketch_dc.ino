//Motor A
const int inputPin1  = 8;    // Pin 15 of L293D IC
const int inputPin2  = 9;    // Pin 10 of L293D IC

void setup() 
{
    pinMode(inputPin1, OUTPUT);
    pinMode(inputPin2, OUTPUT);
     
}

void loop() 
{
    digitalWrite(inputPin1, HIGH);
    digitalWrite(inputPin2, LOW);
    
}
