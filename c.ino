void current() {
  lcd.clear();
  AcsValue1 = analogRead(A3);
  AcsValue2 = analogRead(A4);
  AcsValue3 = analogRead(A5);

  i1 =abs((2.5 - (AcsValue1 * (5.0 / 1024.0)) ) / 0.185);
  i2 =abs( (2.5 - (AcsValue2 * (5.0 / 1024.0)) ) / 0.185);
  i3 =abs( (2.5 - (AcsValue3 * (5.0 / 1024.0)) ) / 0.185);
  Serial.println(i1);
  Serial.println(i2);
  Serial.println(i3);


  lcd.setCursor(2, 0);
  lcd.print("I1");
  lcd.setCursor(1, 1);
  lcd.print(i1); // Display the AC voltage on LCD
  lcd.setCursor(7, 0);
  lcd.print("I2");
  lcd.setCursor(6, 1);
  lcd.print(i2); // Display the AC voltage on LCD
  lcd.setCursor(13, 0);
  lcd.print("I3");
  lcd.setCursor(12, 1);
  lcd.print(i3);
  delay(1500);

}
