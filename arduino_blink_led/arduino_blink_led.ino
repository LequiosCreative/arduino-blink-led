//Set Pin Number.
int led = 13;

//Initialize
void setup() {
  pinMode(led,OUTPUT);
}

//Loop
void loop() {
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(1000);
}
