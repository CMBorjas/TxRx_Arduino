// Create buttons using digital 12 & 13 pins
const int button1Pin = 13;  
const int button2Pin = 12; 

void setup() {
  
  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);
  Serial.begin(9600);
  Serial.println("Transmitter Ready. Press buttons to send data.");
}

void loop() {
  // Send 1
  if (digitalRead(button1Pin) == LOW) {
    Serial.write('1');
    Serial.println("\n Sent: 1");
    delay(300);
  }
  // Send 0
  if (digitalRead(button2Pin) == LOW) {
    Serial.write('0');
    Serial.println("\n Sent: 0");
    delay(300);
  }
}
