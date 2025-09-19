#include <Servo.h>

Servo servouno;
Servo servodos;
bool botonavanzar;
bool botonretroceder;
int grados = 0;

void setup()
  
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  servouno.attach(A0);
  servodos.attach(A1);
  servouno.write(0);
  servodos.write(0);
  Serial.begin(9600);
}

void loop()
{
 botonavanzar = digitalRead(2);
 botonretroceder = digitalRead(3);
 Serial.println(botonavanzar);
  
  if (botonavanzar == LOW){
  	avanzar();
    delay(100);
  }
  if (botonretroceder == LOW){
    retroceder();
    delay(100);
  }
}

void avanzar(){
  if (grados > 180){
   	grados = 180;
  }
  grados = grados + 10;
  servouno.write(grados);
  servodos.write(grados);
  delay(1000);
}
 
void retroceder(){
  if (grados < 0){
    grados = 0;
  }
  grados = grados - 10;
  servouno.write(grados);
  servodos.write(grados);
  delay(1000);
}

