#include <Servo.h>

int servoPin = 3; // random #, change to actual pin number
Servo Servo1;

void setup() {
  Servo1.attach(servoPin);
}

void loop() {
  Servo1.writeMicroseconds(2000); // turn fully clockwise 
  delay(1000); // wait 1 second
  Servo1.writeMicroseconds(1000); // turn fully counter-clockwise
  delay(1000); // wait 1 second
}