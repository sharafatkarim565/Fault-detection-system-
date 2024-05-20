#include<Wire.h>
#include<LiquidCrystal_I2C.h>
int x=0;
float AcsValue1=0.0;
float AcsValue2=0.0;
float AcsValue3=0.0;
float V1 = A0,V2 = A1,V3 = A2,I1=A3,I2=A4,I3=A5;
int r1 = 13;
int y1 = 12;
int b1 = 11;
int n1 = 10;
int r2 = 9;
int y2 = 8;
int b2 = 7;
int n2 = 6;
int r3 = 5;
int y3 = 4;
int b3 = 3;
int n3 = 2;
LiquidCrystal_I2C lcd1(0x27, 20, 4 );
LiquidCrystal_I2C lcd2(0x25, 20, 4);
LiquidCrystal_I2C lcd3(0x21, 20, 4);

void setup() {
  pinMode(r1, OUTPUT);
  pinMode(y1, OUTPUT);
  pinMode(b1, OUTPUT);
  pinMode(n1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(y2, OUTPUT);
  pinMode(b2, OUTPUT);
  pinMode(n2, OUTPUT);
  pinMode(r3, OUTPUT);
  pinMode(y3, OUTPUT);
  pinMode(b3, OUTPUT);
  pinMode(n3, OUTPUT);

  digitalWrite(r1, LOW);
  digitalWrite(y1, LOW);
  digitalWrite(b1, LOW);
  digitalWrite(n1, LOW);
  digitalWrite(r2, LOW);
  digitalWrite(y2, LOW);
  digitalWrite(b2, LOW);
  digitalWrite(n2, LOW);
  digitalWrite(r3, LOW);
  digitalWrite(y3, LOW);
  digitalWrite(b3, LOW);
  digitalWrite(n3, LOW);
  
  pinMode(V1, INPUT);
  pinMode(V2, INPUT);
  pinMode(V3, INPUT);
  pinMode(I1, INPUT);
  pinMode(I2, INPUT);
  pinMode(I3, INPUT);

  lcd1.begin();
  lcd2.begin();
  lcd3.begin();
  Serial.begin(9600);
  lcd1.backlight();
  lcd2.backlight();
  lcd3.backlight();

}

void loop() {
  
 


display_1();  
  display_2();
  display_3();
}
