int pot=0;
const int LED1=13,LED2=10;

void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  pot=analogRead(A0);
  Serial.println(pot);
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,LOW);
  delay(pot);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);
  delay(pot);
}
