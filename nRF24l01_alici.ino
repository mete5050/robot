#include <SPI.h>
#include "nRF24L01.h"
#include "RF24.h"
int msg[1];
RF24 radio(9,10);
const uint64_t pipe = 0xE8E8F0F0E1LL;
const int mos=30;
const int mos1=31;
const int mas=34;
const int mas1=35;
const int moso=36;
const int moso1=37;
const int maso=38;
const int maso1=39;
void ileri(){
digitalWrite(mos ,HIGH);
digitalWrite(mos1 ,LOW);
digitalWrite(mas ,HIGH);
digitalWrite(mas1 ,LOW);
digitalWrite(moso ,HIGH);
digitalWrite(moso1 ,LOW);
digitalWrite(maso ,HIGH);
digitalWrite(maso1 ,LOW);
radio.begin();
radio.openReadingPipe(1,pipe);
radio.startListening();
}
void geri(){
digitalWrite(mos ,LOW);
digitalWrite(mos1 ,HIGH);
digitalWrite(mas ,LOW);
digitalWrite(mas1 ,HIGH);
digitalWrite(moso ,LOW);
digitalWrite(moso1 ,HIGH);
digitalWrite(maso ,LOW);
digitalWrite(maso1 ,HIGH);
}
void sag() {
digitalWrite(mos ,HIGH);
digitalWrite(mos1 ,LOW);
digitalWrite(mas ,HIGH);
digitalWrite(mas1 ,LOW);
digitalWrite(moso ,LOW);
digitalWrite(moso1 ,HIGH);
digitalWrite(maso ,LOW);
digitalWrite(maso1 ,HIGH);
}
void sol(){
digitalWrite(mos ,LOW);
digitalWrite(mos1 ,HIGH);
digitalWrite(mas ,LOW);
digitalWrite(mas1 ,HIGH);
digitalWrite(moso ,HIGH);
digitalWrite(moso1 ,LOW);
digitalWrite(maso ,HIGH);
digitalWrite(maso1 ,LOW);
}
void setup() {
  // put your setup code here, to run once:
pinMode(mos ,OUTPUT);
pinMode(mos1 ,OUTPUT);
pinMode(mas ,OUTPUT);
pinMode(mos1 ,OUTPUT);
pinMode(moso ,OUTPUT);
pinMode(mos1 ,OUTPUT);
pinMode(maso ,OUTPUT);
pinMode(maso1 ,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (radio.available()){
  radio.read(msg, 1); 
  
}
}
