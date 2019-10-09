int inpin = 2;//input pin
int outpin = 8;//output pin
void setup()
{
  pinMode(2,INPUT);
  pinMode(8,OUTPUT);

}

void loop()
{
    if (digitalRead(inpin)==1)
    {
      digitalWrite(outpin , HIGH);
    }
    else
    {
      digitalWrite(outpin , LOW);
    }
}
