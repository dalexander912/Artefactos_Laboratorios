int ledR = 5;
int ledG = 6;
int ledB = 7;

void setup() {
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
}

void setColor(int red, int green, int blue) {
  analogWrite(ledR, red);
  analogWrite(ledG, green);
  analogWrite(ledB, blue);
}

void loop() {
  setColor(255, 128, 64);
  delay(2000);
  setColor(255, 0, 0);
  delay(2000);
  setColor(0, 32, 255);
  delay(2000);
  setColor(128, 0, 64);
  delay(2000);
  setColor(64, 0, 0);
  delay(2000);
  setColor(255, 255, 255);
  delay(2000);
  setColor(192, 192, 192);
  delay(2000);
  setColor(0, 0, 0);
  delay(2000);
  setColor(64, 0, 255);
  delay(2000);
  setColor(255, 0, 255);
  delay(2000);
}