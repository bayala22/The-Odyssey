#include <Servo.h>

Servo myservo;
const int buttonPin = 4;

void setup() {
  myservo.attach(8);
  pinMode(buttonPin, INPUT);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {
    myservo.write(180);

  } else {

    myservo.write(0);
  }
}
