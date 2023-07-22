#include<Servo.h>
Servo Myservo;
int pos;
void setup()
{
Myservo.attach(8);

}


void loop()
{
for(pos=0;pos<=90;pos++){
Myservo.write(pos);
delay(0.5);
}
 delay(0.5);
 for(pos=90;pos>=0;pos--){
Myservo.write(pos);
delay(0.5);
}
 delay(0.5);
}
