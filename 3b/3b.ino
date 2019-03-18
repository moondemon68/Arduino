int pot=0;
const int LED1=13,LED2=10,LED3=7;

void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
}

void loop() {
  pot=analogRead(A0);
  Serial.println(pot);
  digitalWrite(LED1,HIGH);
  delay(pot);
  digitalWrite(LED1,LOW);
  pot=analogRead(A0);
  Serial.println(pot);
  digitalWrite(LED2,HIGH);
  delay(pot);
  digitalWrite(LED2,LOW);
  pot=analogRead(A0);
  Serial.println(pot);
  digitalWrite(LED3,HIGH);
  delay(pot);
  digitalWrite(LED3,LOW);
}
