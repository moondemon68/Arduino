const int LED1=13,LED2=10;

void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(LED1,HIGH);
  delay(250);
  digitalWrite(LED1,LOW);
  delay(250);
  digitalWrite(LED2,HIGH);
  delay(1000);
  digitalWrite(LED2,LOW);
  delay(1000);
}
