char degree = 176;
const int Sensor = A1;

void setup(){
  pinMode(Sensor, INPUT);
  Serial.begin(9600);
}

void loop(){
  int temp = analogRead(Sensor);
  float Voltage = (temp * 5.0)/1024;
  float tempcel = (Voltage - 0.5)*100.0;
  Serial.print("Celcius: ");
  Serial.print(tempcel);
  Serial.print(degree);
  delay(1000);
}
