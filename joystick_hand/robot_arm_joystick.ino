#define pinx A0
#define piny A1
#define pinb 12
#include <Servo.h>
int x=0;
int y=0; 
int b=0;
// R goes from 30 to 50
// P goes from 40 to 100
// J goes from 30 to 60
// tolerance +/- 10
 
Servo R;  // create servo object to control a servo 
Servo J;                // twelve servo objects can be created on most boards
 Servo P; 

 
void setup() 
{ pinMode(pinb,0);
pinMode(11,1);
digitalWrite(11,1);
  P.attach(7);
  R.attach(9);
   J.attach(8);// attaches the servo on pin 9 to the servo object 
} 

void grip(){

R.write(30);
delay(15);
}

void rel(){
  
R.write(50);
delay(15);
}

void longarm(int a){
  J.write(a);
delay(15);
}

void shortarm(int a){
  P.write(a);
delay(15);
}
 
void loop() 
{ 
x=analogRead(pinx);
x=map(x,0,1023,10,150);
y=analogRead(piny);
y=map(y,0,1023,10,90);
b=digitalRead(pinb);

if(b==0) grip();
else rel(); 

longarm(y);
shortarm(x);
delay(15);

} 

