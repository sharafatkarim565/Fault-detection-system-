void display_3() {
  lcd3.clear();

  float AcVolt1 = analogRead(V1); //Read the division at analog pin A0 (0 to 1023)
  float AcVolt2 = analogRead(V2);
  float AcVolt3 = analogRead(V3);

  AcsValue1 = analogRead(I1);
  AcsValue2 = analogRead(I2);
  AcsValue3 = analogRead(I3);

  int vo1 = (AcVolt1 * (5.0 / 1023)) * 60.10; // Convert the AC divison into volt
  int vo2 = (AcVolt2 * (5.0 / 1023)) * 64.13;
  int vo3 = (AcVolt3 * (5.0 / 1023)) * 58.82;

  float io1 = abs((2.5 - (AcsValue1 * (5.0 / 1024.0)) ) / 0.185);
  float io2 = abs( (2.5 - (AcsValue2 * (5.0 / 1024.0)) ) / 0.185);
  float io3 = abs( (2.5 - (AcsValue3 * (5.0 / 1024.0)) ) / 0.185);
  Serial.println("IO");
  Serial.println(io1);
  Serial.println(io2);
  Serial.println(io3);

  lcd3.setCursor(3, 0);
  lcd3.print("VR");
  lcd3.setCursor(2, 1);
  lcd3.print(vo1); // Display the AC voltage on LCD
  lcd3.setCursor(9, 0);
  lcd3.print("VY");
  lcd3.setCursor(8, 1);
  lcd3.print(vo2); // Display the AC voltage on LCD
  lcd3.setCursor(15, 0);
  lcd3.print("VB");
  lcd3.setCursor(14, 1);
  lcd3.print(vo3); // Display the AC voltage on LCD
  lcd3.setCursor(3, 2);
  lcd3.print("IR");
  lcd3.setCursor(2, 3);
  lcd3.print(io1); // Display the AC voltage on LCD
  lcd3.setCursor(9, 2 );
  lcd3.print("IY");
  lcd3.setCursor(8, 3);
  lcd3.print(io2); // Display the AC voltage on LCD
  lcd3.setCursor(15, 2);
  lcd3.print("IB");
  lcd3.setCursor(14, 3);
  lcd3.print(io3);
  delay(1500);

}
