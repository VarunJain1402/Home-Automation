#include<Servo.h>

Servo a;

  int r,l,i=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  a.attach(9);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  r=analogRead(A0);
  l=analogRead(A1);
  Serial.println("r :");
  Serial.println(r);
  Serial.println("l :");
  Serial.println(l);
  if(r>l)
  {
      if(i<180)
      i++;
      a.write(i);
      delay(10);
  }
  if(r<l)
  {
      if(i>0)
      i--;
      a.write(i);
      delay(10);
  }
}