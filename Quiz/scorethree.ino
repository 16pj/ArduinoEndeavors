#include <LiquidCrystal.h>
LiquidCrystal lcd(7,6, 5, 4, 3, 2);


int a = 11;
int b=10;
//int c=4;
int disp = 9;
int add = 8;

int A=0;
int B=0;
//int C=0;

void setup(){

int A=0;
int B=0;
//int C=0;
lcd.begin(16, 2);
lcd.print("Welcome 2 QUIZ :) ");
delay(3000);

}

void addf(){
while(1)
{
 if(digitalRead(disp)==1) return;

if(digitalRead(a)==1) {lcd.clear();lcd.print("Team A: "); delay(50); A++;lcd.print(A);}
delay(50);
if(digitalRead(b)==1) {lcd.clear();lcd.print("Team B: "); delay(50);  B++;lcd.print(B);}
delay(50);
//if(digitalRead(c)==1) {lcd.clear(); C++;lcd.print(c);}

}
}

void displayf(){
while(1)
{
 if(digitalRead(add)==1) return;

if(digitalRead(a)==1){lcd.clear();lcd.print("Team A's score: "); delay(15);
lcd.setCursor(0,1);lcd.print(A);}
if(digitalRead(b)==1){lcd.clear();lcd.print("Team B's score: "); delay(15);
lcd.setCursor(0,1);lcd.print(B);}
//if(digitalRead(c)==1) lcd.print(c);

}
}



void loop(){
lcd.clear();
lcd.print("Let's Start!!");
delay(50);

if(digitalRead(add)==1) {lcd.clear(); lcd.print("add"); delay(100);addf();}

if(digitalRead(disp)==1){lcd.clear();lcd.print("disp");delay(100); displayf();}


}
