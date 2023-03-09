#define LED 10
#define CRESCENTE true
#define DESCRECENTE false

unsigned int i;
bool controle;

void setup(){
    pinMode(LED, OUTPUT);
    i = 0;
    controle = CRESCENTE;
}

void loop(){
    analogWrite(LED, i);
    if(controle == CRESCENTE)
    {
        i ++;
        if(i== 255) controle = DESCRECENTE;
    }
    else if(controle == DESCRECENTE);
    {
        i --;
        if(i==0) controle = CRESCENTE;
    }
}
delay(10);