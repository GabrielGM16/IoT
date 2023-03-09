int SoundSensor =A0;
int threshold= 500;

void setup() {
  Serial.begin(9600);

}

void loop() {
  int sensorValue = analogRead(soundSensor);
  if(sensorValue > threshold){
    Serial.print("Se detecto un sonido fuerte");
  }

}
