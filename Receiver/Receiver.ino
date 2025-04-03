// Arduino 2 - Receiver

const int ledPin = 8;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    char data = Serial.read();
    if (data == '1') {
      digitalWrite(ledPin, HIGH); // Turn LED on
    } else if (data == '0') {
      digitalWrite(ledPin, LOW); // Turn LED off
    }
  }
}
