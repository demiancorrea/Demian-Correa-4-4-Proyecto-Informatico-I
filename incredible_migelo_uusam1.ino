#define rojo 3
#define verde 5
#define azul 6
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  for(int r=0; r<=255;r++){
    analogWrite(rojo, r);
    delay(50);
    for(int b=0; b<=255;b++){
      analogWrite(azul, b);
      delay(50);
      	for(int g=0; g<=255;g++){
        	analogWrite(verde, g);
          	delay(50);
      }
    }}
  delay(100);
}
