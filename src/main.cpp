#include<Arduino.h>

#define led 13
#define photo A1
int dataread;
void setup()
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(photo,INPUT);
}

void loop()
{
   dataread = analogRead(A1);
   Serial.println(dataread);
    analogWrite(13, map(dataread, 0, 1023, 0, 255));
  delay(100); //

}