int Pino23 = 23;

void setup() {
  Serial.begin(115200);
  pinMode(Pino23, OUTPUT);
  digitalWrite(Pino23, LOW);
}

void loop() {
  LigarLed();
  LigarRele();
}

void LigarLed() {
  digitalWrite(Pino23, HIGH);
  Serial.println("Passei por aqui...");
  delay(2000);
  digitalWrite(Pino23, LOW);
  delay(2000);
} 