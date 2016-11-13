int lg=2;
int lb=3;
int la=4;
int lf=5;
int dot=6;
int le=7;
int ld=8;
int lc=9;
int unos=10;
int dos=11;
int tres=12;
int reset=13;
int x=9;

void setup() {
  // put your setup code here, to run once:
pinMode(la,OUTPUT);
pinMode(lb,OUTPUT);
pinMode(lc,OUTPUT);
pinMode(ld,OUTPUT);
pinMode(le,OUTPUT);
pinMode(lf,OUTPUT);
pinMode(lg,OUTPUT);
pinMode(dot,OUTPUT);



}


void seven(int a){

 if(a==0){
digitalWrite(la,0);
digitalWrite(lb,0);
digitalWrite(lc,0);
digitalWrite(ld,1);
digitalWrite(le,0);
digitalWrite(lf,0);
digitalWrite(lg,0);
//digitalWrite(dot,1);

while(1) if(digitalRead(reset)==1) {x=9; break;}
 }
 
if(a==1){
digitalWrite(la,1);
digitalWrite(lb,0);
digitalWrite(lc,0);
digitalWrite(ld,0);
digitalWrite(le,0);
digitalWrite(lf,1);
digitalWrite(lg,0);
//digitalWrite(dot,1);
while(1) if(digitalRead(reset)==1){
x=9;
break;
  }

}

if(a==2){
digitalWrite(la,0);
digitalWrite(lb,0);
digitalWrite(lc,0);
digitalWrite(ld,0);
digitalWrite(le,1);
digitalWrite(lf,1);
digitalWrite(lg,1);
//digitalWrite(dot,1);
while(1) if(digitalRead(reset)==1){x=9; return;}
}



}
void loop() {

digitalWrite(la,1);
digitalWrite(lb,1);
digitalWrite(lc,1);
digitalWrite(ld,1);
digitalWrite(le,1);
digitalWrite(lf,1);
digitalWrite(lg,1);
digitalWrite(dot,1);

  
if(digitalRead(unos)==1)x=0;
if(digitalRead(dos)==1)x=1;
if(digitalRead(tres)==1)x=2;

seven(x);

}
