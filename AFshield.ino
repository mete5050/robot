#include <AFMotor.h> 
AF_DCMotor smotor(4, MOTOR34_64KHZ);
AF_DCMotor smotor1(3, MOTOR34_64KHZ);
AF_DCMotor somotor(2, MOTOR34_64KHZ);
AF_DCMotor somotor1(1, MOTOR34_64KHZ);
void ileri(){
smotor.run(FORWARD);
smotor1.run(FORWARD);
somotor.run(FORWARD);
somotor1.run(FORWARD);
}
void geri(){
smotor.run(BACKWARD);
smotor1.run(BACKWARD);
somotor.run(BACKWARD);
somotor1.run(BACKWARD);
}
void sag() {
smotor.run(FORWARD);
smotor1.run(FORWARD);
somotor.run(BACKWARD);
somotor1.run(BACKWARD);
}
void sol(){
smotor.run(BACKWARD);
smotor1.run(BACKWARD);
somotor.run(FORWARD);
somotor1.run(FORWARD);
}
void dur(){
smotor.run(RELEASE);
smotor1.run(RELEASE);
somotor.run(RELEASE);
somotor1.run(RELEASE);
}
  int state; 
void setup() {

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
