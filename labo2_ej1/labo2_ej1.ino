int sensor;
float voltaje;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensor = analogRead(A0);
  voltaje = (sensor * 0.5) / 1023;
  Serial.print("Sensor: ");
  Serial.println(sensor); // [0 a 1023]
  Serial.print("Voltaje: ");
  Serial.print(voltaje); // [0 a 5]
  Serial.println("V");
  delay(1000);
}