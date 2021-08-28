//Programa para acender as luzes com palmas
int pino_som = 7; //Define o pino que será utilizado para o sensor de som
int pino_rele = 5;     //E o que será utilizado para o rele
boolean rele = HIGH; // Define um booleano
 
void setup() {
  pinMode(pino_som, INPUT); //Coloca o pino do sensor de som como entrada
  pinMode(pino_rele, OUTPUT);   // E o do rele como saida
}
 
void loop() {
  int som = digitalRead(pino_som); //Verifica se a saida do sensor esta ativa
   
  if(som){ // Se o som estiver alto
    rele = !rele; //Operacao NAO: Se estiver LOW, passa pra HIGH. Se estiver HIGH passa para LOW
    digitalWrite(pino_rele, rele); // Manda o valor da variavel para o rele

   
    delay(300); // Aguarda 0.3 segundos
   }
}
