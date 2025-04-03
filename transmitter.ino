// Create the button var 2 & 3
const int button_2 = 2;
const int button_3 = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(button_2, INPUT_PULLUP);
  pinMode(button_3, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  //Verify that the signal is set to low
  if((digitalRead(button_2)) == LOW){
    Serial.write(1);
    Serial.println("1");
    delay(300);
  }
  else if((digitalRead(button_3))==LOW)
  Serial.write(0);
  delay(300);

}
