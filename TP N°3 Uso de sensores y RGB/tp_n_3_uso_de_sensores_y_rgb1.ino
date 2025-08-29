int temperatura;
int celsius;
int luz;
void setup()
{
	pinMode(3, OUTPUT);
  	pinMode(4, OUTPUT);
  	pinMode(5, OUTPUT);
  	Serial.begin(9600);
}

void loop()
{
 temperatura = analogRead(A0);
  celsius = map(((temperatura -20)*3.04), 0, 1023, -40, 125);
  Serial.print("La temperatura actual es: ");
  Serial.println(celsius);
  Serial.println("Grados Celsius");
  
  luz = analogRead(A1);
  Serial.println(luz);
  delay(100);
  luz = map(luz,722, 1022, 0, 255);
  
  if (76 < luz && luz < 178){
    if (celsius>90){
    digitalWrite(4 ,LOW);
    digitalWrite(5, LOW);
    digitalWrite(3, HIGH);
  }else if(celsius<18){
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
  }
  else{
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(5, HIGH);
  }}
  else{
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(3, LOW);
  }
  delay(1000);
}
