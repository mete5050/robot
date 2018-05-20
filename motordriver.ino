const int mos=30;
const int mos1=31;
const int mas=32;
const int mas1=33;
const int moso=34;
const int moso1=35;
const int maso=36;
const int maso1=37;
void ileri(){
digitalWrite(mos ,HIGH);
digitalWrite(mos1 ,LOW);
digitalWrite(mas ,HIGH);
digitalWrite(mas1 ,LOW);
digitalWrite(moso ,HIGH);
digitalWrite(moso1 ,LOW);
digitalWrite(maso ,HIGH);
digitalWrite(maso1 ,LOW);
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
void dur(){
  digitalWrite(maso1 ,LOW);
  digitalWrite(maso ,LOW);
  digitalWrite(moso1 ,LOW);
  digitalWrite(moso ,LOW);
  digitalWrite(mas1 ,LOW);
  digitalWrite(mas ,LOW);
  digitalWrite(mos1 ,LOW);
  digitalWrite(mos ,LOW);
}
  int state;
void setup() {

  
  pinMode(mos ,OUTPUT);
pinMode(mos1 ,OUTPUT);
pinMode(mas ,OUTPUT);
pinMode(mos1 ,OUTPUT);
pinMode(moso ,OUTPUT);
pinMode(mos1 ,OUTPUT);
pinMode(maso ,OUTPUT);
pinMode(maso1 ,OUTPUT); 


    Serial.begin(9600);
}
 
void loop() {
    if(digitalRead(state)==LOW) {
dur();
}
    if(Serial.available() > 0){     
      state = Serial.read();   
  
    }

    if (state == 66){
      geri();
      }
    if (state == 70){
      ileri();
      }
        if (state == 82){
      sag();
      }
        if (state == 76){
      sol();
      }
        if (state == 83){
      dur();
      }
        if (state == 0){
      dur();
      }
}
