String password ;
String correctpassword = String("CAB#1729");

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  if (Serial.available()>0)
  {
    if (check() == true)
      Serial.print("Correct Password");
    else
      Serial.print("Incorrect Password");
    while(1){}
  }
}

bool check()
{
    password = Serial.readString();
    if (password.equals(correctpassword))
    { 
      return true ;
    }
    else
    {
      return false ; 
    }
}
