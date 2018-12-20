/*
 * by DojoDave <http://www.0j0.org>
 * modified 30 Aug 2011 by Tom Igoe
 * This example code is in the public domain
 * http://www.arduino.cc/en/Tutorial/Button
 */

const int buttonPin = 2;
const int ledPin = 13;
int buttonState = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
