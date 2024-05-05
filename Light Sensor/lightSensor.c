int lightSensorValue = 0;

void setup(){
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  lightSensorValue = analogRead(A0);
  Serial.println(lightSensorValue);
  int ledBrightness = map(lighrSensorValue, 0, 1023, 0, 255);
  analogWrite(9, ledBrightness);
  delay(100);
}
