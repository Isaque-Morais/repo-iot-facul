#define VERMELHO 10
#define AMARELO 9
#define VERDE 8

void setup(){
    pinMode(VERMELHO, OUTPUT);   #VERMELHO
    pinMode(AMARELO, OUTPUT);     #AMARELO
    pinMode(VERDE, OUTPUT);       #VERDE  
}

void loop() {
    digitalWrite(VERDE, HIGH);      //Acende o LED Verde
    digitalWrite(AMARELO, LOW);     //Apaga o LED Amarelo
    digitalWrite(VERDE, LOW);       //Aguarda 5 segundo 
    delay(5000);

    digitalWrite(VERDE, LOW);
    digitalWrite(AMARELO, LOW);
    digitalWrite(VERMELHO, HIGH);
    delay(2000);

    digitalWrite(VERDE, LOW);
    digitalWrite(AMARELO, LOW);
    digitalWrite(VERDE, HIGH);
    delay(5000);
}
