// Open Source

int pinoLed = 12; //PINO DIGITAL UTILIZADO PELO LED  
int pinoSensor = 8; //PINO DIGITAL UTILIZADO PELO SENSOR
   
void setup(){  
  pinMode(pinoSensor, INPUT); //DEFINE O PINO COMO ENTRADA
  pinMode(pinoLed, OUTPUT); //DEFINE O PINO COMO SAÍDA   
  digitalWrite(pinoLed, LOW); //LED INICIA DESLIGADO
}  
   
void loop(){
  if (digitalRead(pinoSensor) == HIGH){ //SE A LEITURA DO PINO FOR IGUAL A HIGH, FAZ
        digitalWrite(pinoLed, HIGH); //ACENDE O LED
  }else{//SENÃO, FAZ
        digitalWrite(pinoLed, LOW); //APAGA O LED
  }    
}
