#include <Servo.h>

Servo myservo;
const int buttonPin = 4;
const int ledPin = 3;

void setup() {
  myservo.attach(8);
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {
    myservo.write(180);
    digitalWrite(ledPin, HIGH);

  } else {

    myservo.write(0);
    digitalWrite(ledPin, LOW);
  }
}
