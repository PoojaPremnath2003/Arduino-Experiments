//Initializing LED Pin
int led_pin = 10;
void setup() {
  //Declaring LED pin as output
  pinMode(led_pin, OUTPUT);
}
void loop() {
  //making the led glow
  for(int i=0; i<255; i++){
    analogWrite(led_pin, i);
    delay(5);
  }
  for(int i=255; i>0; i--){
    //Fading the LED
    analogWrite(led_pin, i);
    delay(5);
  }
}
