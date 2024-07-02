#include<Servo.h>
Servo myServo;
const int servoPin=9;

void setup() {
myServo.attach(servoPin);
// put your setup code here, to run once:

}

void loop() {
myServo.write(0);  // put your main code here, to run repeatedly:
delay(1000);
myServo.write(90);
delay(1000);
myServo.write(180);
delay(1000);}
