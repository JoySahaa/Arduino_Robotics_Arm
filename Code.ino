#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;

void setup() {
  Serial.begin(9600);
  myservo1.attach(12);
  myservo2.attach(11);
  myservo3.attach(10);
  myservo4.attach(9);
  myservo5.attach(8);
  myservo6.attach(7);
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
  myservo6.write(60);
  }

void loop()
{
  if(Serial.available())
  {
    char data=Serial.read();
    switch (data)
    {
      case 'd':
              myservo1.write(0);
      break;
      case 'D':
              myservo1.write(180);
      break; 
      case 'e':
              myservo2.write(0);
      break; 
      case 'E':
              myservo2.write(180);
      break; 
      case 'f':
              myservo3.write(0);
      break; 
      case 'F':
              myservo3.write(180);
      break; 
      case 'g':
              myservo4.write(0);
      break; 
      case 'G':
              myservo4.write(180);
      break; 
      case 'h':
              myservo5.write(0);
      break; 
      case 'H':
              myservo5.write(180);
      break; 
      case 'a':
              myservo6.write(60);
      break; 
      case 'A':
              myservo6.write(120);
      break;
      case 'b':
              myservo6.write(0);
      break;          
    }
  }
////  myservo1.write(0);
////  myservo2.write(0);
////  myservo3.write(0);
////  myservo4.write(0);
////  myservo5.write(0);
//  myservo6.write(0);
//  delay(2000);
////  myservo1.write(180);
////  myservo2.write(180);
////  myservo3.write(180);
////  myservo4.write(180);
////  myservo5.write(180);
////  myservo6.write(180);
////  delay(2000);
}
