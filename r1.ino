void voltage()
{
  digitalWrite(r2, LOW);
  digitalWrite(y2, LOW);
  digitalWrite(b2, LOW);
  digitalWrite(n2, LOW);
  lcd.clear();
  float AcVolt1 = analogRead(V1); //Read the division at analog pin A0 (0 to 1023)
  float AcVolt2 = analogRead(V2);
  float AcVolt3 = analogRead(V3);
  int v1 = (AcVolt1 * (5.0 / 1023)) * 61.55; // Convert the AC divison into volt
  int v2 = (AcVolt2 * (5.0 / 1023)) * 68.95;
  int v3 = (AcVolt3 * (5.0 / 1023)) * 62.34;
  Serial.println(v1);
  Serial.println(v2);
  Serial.println(v3);

 /* if (190 < v1 && v1 < 210 )
  {
    digitalWrite(r2, HIGH);
    lcd.setCursor(3, 0);
    lcd.print("L-N FAULT");
    delay(30000);

  }
  if (v2 < v1 && v2 < 180)
  {
    digitalWrite(y2, HIGH);
    digitalWrite(b2, HIGH);
    lcd.setCursor(3, 0);
    lcd.print("L-L FAULT");
    delay(30000);

  }
  if (v1 < 100)
  {
    digitalWrite(r2, HIGH);
    digitalWrite(y2, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(n2, HIGH);
    lcd.setCursor(2, 0);
    lcd.print("L-L-N FAULT");
    delay(30000);
  }*/



  lcd.setCursor(2, 0);
  lcd.print("V1");
  lcd.setCursor(1, 1);
  lcd.print(v1); // Display the AC voltage on LCD
  lcd.setCursor(7, 0);
  lcd.print("V2");
  lcd.setCursor(6, 1);
  lcd.print(v2); // Display the AC voltage on LCD
  lcd.setCursor(13, 0);
  lcd.print("V3");
  lcd.setCursor(12, 1);
  lcd.print(v3); // Display the AC voltage on LCD
  delay(1500);

}
