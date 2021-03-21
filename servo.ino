#include <Servo.h>
Servo Servo;

void setup()
{
  Servo.attach(3);
}

void loop()
{
  for(int i=0; i<=180; i=i+15){
    Servo.write(i);
    delay(1000);
  }
  for(int a=180; a>=0; a=a-30){
    Servo.write(a);
    delay(1000);
  }
}
