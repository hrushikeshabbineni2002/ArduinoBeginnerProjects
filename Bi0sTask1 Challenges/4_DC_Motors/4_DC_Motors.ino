int outpin1 = 3;
int outpin2 = 5;
int outpin3 = 6;
int outpin4 = 9;

void setup()
{
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop()
{
    analogWrite(outpin1,analogRead(A0));
    analogWrite(outpin2,analogRead(A1));
    analogWrite(outpin3,analogRead(A2));
    analogWrite(outpin4,analogRead(A3)); 
}
