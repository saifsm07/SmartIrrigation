//NerdSaif 

int digitalSensor = 2;
int pumpPin = 8;

void setup()
{
  pinMode(digitalSensor,INPUT);
  pinMode(pumpPin,OUTPUT);
}

void loop()
{
  if(digitalRead(digitalSensor)== HIGH)
  {
    digitalWrite(pumpPin,LOW);
    delay(1500);
  }
  else
  {
    digitalWrite(pumpPin,HIGH);
    delay(1500);
  }
  delay(100);
}
