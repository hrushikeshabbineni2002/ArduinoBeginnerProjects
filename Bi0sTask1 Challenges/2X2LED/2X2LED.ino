int inpin = 2;
int outpin = 8;
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
