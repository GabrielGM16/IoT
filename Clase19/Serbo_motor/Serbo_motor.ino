int pint=2;

#define SENSOR_PIN 14

void setup() {
  pinMode(pint, OUTPUT);
  pinMode(SENSOR_PIN, OUPUT);

  Serial.begin(115200);

}

void loop() {
  digitalWrite(pint, digiatalRead(SENSOR_PIN));

}
