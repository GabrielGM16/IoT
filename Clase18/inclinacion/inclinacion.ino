int sensorPin = A0;
float angle = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  int sensorValue= analogRead(sensorPin);
  angle= map(sensorValue, 0, 1023, -90, 90);
  Serial.print("Angulo: ");
  Serial.print(angle);
  delay(1000);
}
