#include<Servo.h>
#include <Joystick.h>

Servo kol1;
Servo kol2;
const int pot_1=A5;
const int pot_2=A4;
int pos=0;
  
void setup()
{
  
  kol1.attach(9);
  kol2.attach(11);
}

void loop()
{
  for(int pos=0;pos<=90;pos=pos+1)
 {
   kol1.write(pos);
   delay(50);
 }
  for(int pos=0;pos<=180;pos=pos+1)
 {
   kol2.write(pos);
   delay(50);
 }
}
