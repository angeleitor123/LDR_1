#include <Arduino.h>
/*
const long A = 1000;     //Resistencia en oscuridad en KΩ
const int B = 15;        //Resistencia a la luz (10 Lux) en KΩ
const int Rc = 1;       //Resistencia calibracion en KΩ
const int LDRPin = 35;   //Pin del LDR
int V;
int ilum;
void setup()
{
   Serial.begin(115200);
}
void loop()
{
   V = analogRead(LDRPin);
   //ilum = ((long)(1024-V)*A*10)/((long)B*Rc*V);  //usar si LDR entre GND y A0
   ilum = ((long)V*A*10)/((long)B*Rc*(1024-V));    //usar si LDR entre A0 y Vcc (como en el esquema anterior)

   Serial.println(ilum);
   delay(1000);
}
*/
int luzsensor = 35; // puerto 25 despinado a la lectura de luz 

int luz = 0;  // variable de lectura

void setup() {
  Serial.begin(115200);           //  setup serial
}

void loop() {
  luz = analogRead(luzsensor);  // read the input pin
  Serial.println(luz);          // debug value
  delay(250);
}
