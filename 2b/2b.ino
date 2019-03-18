int buttonState = 0;
const int LED1=13,LED2=10,BUTTON=2;

void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(BUTTON,INPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState=digitalRead(BUTTON);
  if (buttonState==LOW) {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,LOW);
    delay(1000);
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,HIGH);
    delay(1000);
  } else {
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
  }
}
