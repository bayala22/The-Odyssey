#include <Servo.h>

Servo myservo;
const int buttonPin = 7;
const int ledPin = 5;

void setup() {
  myservo.attach(8);
  pinMode(buttonPin, INPUT); 
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {//close opening to cave
    myservo.write(180);
    digitalWrite(ledPin, HIGH);//turn on light 

  } else {

    myservo.write(0);
    digitalWrite(ledPin, LOW);
  }
}
