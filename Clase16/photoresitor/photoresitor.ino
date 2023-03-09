int photoresitorPin = A0;
int photoresitorValue;

void setup() {
  Serial.begin(9600);

}

void loop() {
  phoresitorValue = analogRead(photoresitorPin);
  Serial.print(photoresistorValue);
  delay(1000);

}
