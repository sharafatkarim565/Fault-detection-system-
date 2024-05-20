void display_1() {
  lcd1.clear();

  float AcVolt1 = analogRead(V1); //Read the division at analog pin A0 (0 to 1023)
  float AcVolt2 = analogRead(V2);
  float AcVolt3 = analogRead(V3);

  AcsValue1 = analogRead(I1);
  AcsValue2 = analogRead(I2);
  AcsValue3 = analogRead(I3);

  int vi1 = (AcVolt1 * (5.0 / 1023)) * 66.93; // Convert the AC divison into volt
  int vi2 = (AcVolt2 * (5.0 / 1023)) * 71.4;
  int vi3 = (AcVolt3 * (5.0 / 1023)) * 65.50;

  float i1 = abs((2.5 - (AcsValue1 * (5.0 / 1024.0)) ) / 0.185);
  float i2 = abs( (2.5 - (AcsValue2 * (5.0 / 1024.0)) ) / 0.185);
  float i3 = abs( (2.5 - (AcsValue3 * (5.0 / 1024.0)) ) / 0.185);
  /*Serial.println("I");
  Serial.println(i1);
  Serial.println(i2);
  Serial.println(i3);*/

  lcd1.setCursor(3, 0);
  lcd1.print("VR");
  lcd1.setCursor(2, 1);
  lcd1.print(vi1); // Display the AC voltage on LCD
  lcd1.setCursor(9, 0);
  lcd1.print("VY");
  lcd1.setCursor(8, 1);
  lcd1.print(vi2); // Display the AC voltage on LCD
  lcd1.setCursor(15, 0);
  lcd1.print("VB");
  lcd1.setCursor(14, 1);
  lcd1.print(vi3); // Display the AC voltage on LCD
  lcd1.setCursor(3, 2);
  lcd1.print("IR");
  lcd1.setCursor(2, 3);
  lcd1.print(i1); // Display the AC voltage on LCD
  lcd1.setCursor(9, 2 );
  lcd1.print("IY");
  lcd1.setCursor(8, 3);
  lcd1.print(i2); // Display the AC voltage on LCD
  lcd1.setCursor(15, 2);
  lcd1.print("IB");
  lcd1.setCursor(14, 3);
  lcd1.print(i3);
  delay(1500);

}
