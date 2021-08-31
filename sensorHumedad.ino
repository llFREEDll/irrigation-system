void setup() {
  //pin para encender el motor
  pinMode(12,OUTPUT);  

}

void loop() {
    digitalWrite(12,LOW);
    // lee lo que detecta el sensor
   int readA=analogRead(A0);
   //mapea los datos en una escala del 0 al 100
   int  show=map(readA,1023,0,0,100);
   Serial.println(show);
  //si la humedad es menor al 50% se enciende la bomba de agua  
  if (show<50)
      digitalWrite(12,HIGH);
  delay(1000);
}
