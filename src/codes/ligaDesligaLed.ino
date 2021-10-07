int Pino23 = 23;

void setup() {
  Serial.begin(115200);
  pinMode(Pino23, OUTPUT);
  digitalWrite(Pino23, LOW);
}

void loop() {
  LigarLed();
  DesligarLed();
}

void LigarLed() {
  Serial.println("Ligando...");
  digitalWrite(Pino23, HIGH);
  delay(2000);
} 

void DesligarLed() {
  Serial.println("Desligando...");
  digitalWrite(Pino23, LOW);
  delay(2000);
} 