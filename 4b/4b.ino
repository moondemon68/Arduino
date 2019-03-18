int serialInput=1000; //default delay 1000ms
const int LED1=13;

void setup() {
  pinMode(LED1,OUTPUT);
  Serial.begin(9600);
  Serial.println("Masukkan angka: ");
}

void loop() {
  if (Serial.available() > 0) {
    serialInput = Serial.parseInt();
    digitalWrite(LED1,HIGH);
    delay(serialInput);
    digitalWrite(LED1,LOW);
    delay(serialInput);
    Serial.println("Masukkan angka: ");
  }
}
