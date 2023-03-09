void setup(){
    pinMode(13, OUTOUT);
}

void loop() {
    digitalWrite(13, HIGH);     //Acende o LED
    delay(1000);                 //Aguarda em segundo
    digitalWrite(13, LOW);       //Acende o LED
    delay(1000);                 //Aguarda em segundo
}