const int LED=13;

void setup() {
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(LED,HIGH);   
  delay(5000);                       
  digitalWrite(LED,LOW);    
  delay(5000);                       
}
