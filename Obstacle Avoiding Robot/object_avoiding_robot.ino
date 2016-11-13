#define trigPin 8
#define echoPin 9
//const int en1=3;                             //ENABLES
//const int en2=5;
const int dos=3;                            //LEFT MOTOR 
const int unos=2;
const int first=5;                             //RIGHT MOTOR
const int second=4;


// UNOS = MOTOR LEFT FRONT, DOS = MOTOR LEFT BACK
// FIRST = MOTOR RIGHT FRONT, SECOND = MOTOR RIGHT BACK



void setup() {
 // pinMode(en1,1);
 // pinMode(en2,1);
  pinMode(unos,1);
  pinMode(dos,1);
   pinMode(first,1);
  pinMode(second,1);
// digitalWrite(en1,1);
 digitalWrite(unos,0);
 digitalWrite(dos,0);
  digitalWrite(first,0);
  digitalWrite(second,0);
    pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void front(){
 digitalWrite(unos,1);
 digitalWrite(dos,0);
 pinMode(first,1);
 pinMode(second,0);
  }

  
void reverse(){
   digitalWrite(unos,0);
 digitalWrite(dos,1);
  pinMode(first,0);
  pinMode(second,1);
  
  }

void left(){
 digitalWrite(unos,1);
 digitalWrite(dos,0);
  pinMode(first,0);
  pinMode(second,1);
  }

void right(){

   digitalWrite(unos,0);
 digitalWrite(dos,1);
  pinMode(first,1);
  pinMode(second,0);
  
  }

void stopp(){
 digitalWrite(unos,0);
 digitalWrite(dos,0);
 pinMode(first,0);
 pinMode(second,0);
  }
  

    void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin, HIGH);
//  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
      front();
  delay(500);

  if (distance <=20){
    stopp();
    delay(1000);
    
    
    reverse();
    delay(3000);
    left();
    delay(6000);

  }
  else {    
    
    front();
  delay(500);

}}
