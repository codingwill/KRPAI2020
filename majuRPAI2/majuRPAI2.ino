#include <DynamixelSerial3.h>

#define kadep   412
#define kidep   612

 
  int a=100; //angkat
  int b=90; //maju
  int kec=200;
  int awal=512;
void setup() {
  Serial.begin(9600);
  Dynamixel3.begin(1000000,2);

  pinMode(23 , OUTPUT);
  pinMode(8 , OUTPUT);
  pinMode(9 , OUTPUT);
  delay(1000);
  
  //tegak();
  //maju2(); 
/*  
  delay(1000);
  putar90();
  geserkiri();
  maju4();
  delay(1000);
  putar45kiri();
  digitalWrite(23, HIGH);
  delay(2000);
*/
}
void loop() {
  //tegak();
  maju();
  /*digitalWrite(9 , HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  delay(1000);
  digitalWrite(8, LOW);
  delay(1000);*/
}

void maju(){
  //angkat kaki kanan 
    Dynamixel3.moveSpeed(12,awal+2*a,kec);  // 712
    Dynamixel3.moveSpeed(5,awal-2*a,kec);   // 712
    Dynamixel3.moveSpeed(1,awal+2*a,kec);   // 712
    delay(100);
//balik awal lengan kiri
    Dynamixel3.moveSpeed(8,kidep-a,kec);   // 612
    Dynamixel3.moveSpeed(10,awal+0.5*a,kec);   //512
    Dynamixel3.moveSpeed(3,kadep,kec);  //412
    delay(100);
//maju lengan kanan 
    Dynamixel3.moveSpeed(2,kadep-0.5*a,kec);  //502
    Dynamixel3.moveSpeed(6,awal+0.25*a + 8.5f,kec);  //602
    Dynamixel3.moveSpeed(11,kidep-0.5*b,kec);//522
    delay(100);
//turun kanan
    Dynamixel3.moveSpeed(12,awal,kec); //512
    Dynamixel3.moveSpeed(5,awal,kec);  //512
    Dynamixel3.moveSpeed(1,awal,kec);  //512
    delay(100);
// angkat kaki kiri
    Dynamixel3.moveSpeed(7,awal-2*a,kec);  // 712 KAKINYA KEBALIK (BIAR NGANGKAT DIKURANG)
    Dynamixel3.moveSpeed(9,awal+2*a,kec);   // 712
    Dynamixel3.moveSpeed(4,awal-2*a,kec);   // 712 KAKINYA KEBALIK (BIAR NGANGKAT DIKURANG)
    delay(100);

//balik awal lengan kanan
    Dynamixel3.moveSpeed(11,kidep,kec);   // 612
    Dynamixel3.moveSpeed(6,awal-0.5*a,kec);   //512
    Dynamixel3.moveSpeed(2,kadep+0.5*a,kec);  //412
    delay(100);
//maju lengan kiri
    Dynamixel3.moveSpeed(8,kidep+0*a,kec);  //502
    Dynamixel3.moveSpeed(10,awal-0.5*b-5,kec);  //602
    Dynamixel3.moveSpeed(3,kadep+0.5*a,kec);//522
    delay(100);
//turun
    Dynamixel3.moveSpeed(7,awal,kec); //512
    Dynamixel3.moveSpeed(9,awal,kec);  //512
    Dynamixel3.moveSpeed(4,awal,kec);  //512
    delay(100);

}
