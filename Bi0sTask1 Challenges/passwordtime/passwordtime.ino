
#include <Timelib.h>
#define TIME_HEADER "T"
#define TIME_REQUEST "Enter No"

String password ;
String correctpassword = String("HelloArduino");

void setup() 
{
  Serial.begin(9600);
  
}

void loop() 
{
  if (Serial.available()>0)
  {   
    for( int i =5 ; i>0 ; i++)
    {
      password = String(Serial.readString());
      if (password.equals(correctpassword))
      {
        Serial.println("correct Password");
      break;
      }
      else 
      {
        Serial.println("incorrect Password");
      }
    }
    setSyncProvider(requestSync);
    processSyncMessage();
  }
  
  if (timeStatus()==timeSet)
  { 
    digitalClockDisplay();
  }
 
  delay(1000);
}

void digitalClockDisplay()
{
  edittimedisplay(hour());
  Serial.print(":");
  edittimedisplay(minute());
  Serial.print(":");
  edittimedisplay(second());
  Serial.print(" ");
  edittimedisplay(day());
  Serial.print("/");
  edittimedisplay(month());
  Serial.print("/");
  Serial.print(year());
  Serial.println();
}
void edittimedisplay(int digit)
{
  if (digits<10)
    Serial.print("0");
  Serial.print(digit);
}

void processSyncMessage()
{
 unsigned long pctime; 

  if(Serial.find(TIME_HEADER)) 
  {
     pctime = Serial.parseInt();
     setTime(pctime);
  }
  
}
time_t requestSync()
{
  Serial.write(TIME_REQUEST);  
  return 0; // the time will be sent later in response to serial mesg
}
