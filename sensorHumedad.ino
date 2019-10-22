void setup() {
  pinMode(12,OUTPUT);  

}

void loop() {
    digitalWrite(12,LOW);
 int readA=analogRead(A0);
 int  show=map(readA,1023,0,0,100);
  Serial.println(show);
  if (show<50)
    digitalWrite(12,HIGH);
  delay(1000);
}
