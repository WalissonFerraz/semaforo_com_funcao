#define ledRed 8
#define ledYellow 9
#define ledGreen 10

void setup() {
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);
}

void lightsRed(int tmp) {
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledGreen, LOW);
  delay(tmp*1000);
}

void lightsYellow(int tmp) {
  digitalWrite(ledRed, LOW);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledGreen, HIGH);
  delay(tmp*1000);
}

void ligthsGreen(int tmp) {
  digitalWrite(ledRed, LOW);
  digitalWrite(ledYellow, HIGH);
  digitalWrite(ledGreen, LOW);
  delay(tmp*1000);
}

void loop() {
  lightsRed(4);
  lightsYellow(2);
  ligthsGreen(4);
}
