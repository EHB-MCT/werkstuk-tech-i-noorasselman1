void setup() {
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
}


void loop() {
  if (counter == 4) {

    counter 0;
  }
    
  digitalWrite(D0, HIGH);
  delay(1000);
  digitalWrite(D0, LOW);
  delay(1000);
  digitalWrite(D1, HIGH);
  digitalWrite(D0, HIGH);
  delay(1000);
  digitalWrite(D1, LOW);
  digitalWrite(D0, LOW);
  delay(1000);
}
