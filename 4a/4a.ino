int serialInput=49;
const int LED1=13;

void setup() {
  pinMode(LED1,OUTPUT);
  Serial.begin(9600);
  Serial.println("Tulis 1 untuk menyalakan lampu. Tulis 0 untuk mematikan lampu");
}

void loop() {
  if (Serial.available() > 0) {
    serialInput = Serial.read();
    Serial.println(serialInput);
    if (serialInput==49) digitalWrite(LED1,HIGH);
    if (serialInput==48) digitalWrite(LED1,LOW);
  }
}
