/*
   This starter program will simply flash an LED every second.

   Place the LED's long arm into pin 13, and the shorter leg into the GND
*/

int led = 13;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}
