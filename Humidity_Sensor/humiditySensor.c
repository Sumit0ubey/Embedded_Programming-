const int analogIn = A1;
int humiditySensorOutput = 0;

void setup(){
  Serial.beign(9600);
}

void loop(){
  humiditySensorOutput = analogRead(analogIn);
  int humiditypercentage = map(humiditySensorOutput, 0, 1023, 10, 70);
  Serial.print("Humidity: ");
  Serial.print(humiditypercentage);
  Serial.print("%");
  delay(5000);
}
