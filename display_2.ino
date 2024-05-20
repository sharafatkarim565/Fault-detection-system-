void display_2()
{ digitalWrite(r2, LOW);
  digitalWrite(y2, LOW);
  digitalWrite(b2, LOW);
  digitalWrite(n2, LOW);
  lcd2.clear();
  float AcVolt1 = analogRead(V1); //Read the division at analog pin A0 (0 to 1023)
  float AcVolt2 = analogRead(V2);
  float AcVolt3 = analogRead(V3);

  AcsValue1 = analogRead(I1);
  AcsValue2 = analogRead(I2);
  AcsValue3 = analogRead(I3);

  int vl1 = (AcVolt1 * (5.0 / 1023)) * 3.27; // Convert the AC divison into volt
  int vl2 = (AcVolt2 * (5.0 / 1023)) * 3.49;
  int vl3 = (AcVolt3 * (5.0 / 1023)) * 3.20;

  float il1 = abs((2.5 - (AcsValue1 * (5.0 / 1024.0)) ) / 0.185);
  float il2 = abs( (2.5 - (AcsValue2 * (5.0 / 1024.0)) ) / 0.185);
  float il3 = abs( (2.5 - (AcsValue3 * (5.0 / 1024.0)) ) / 0.185);
  Serial.println("V");
  Serial.println(vl1);
  Serial.println(vl2);
  Serial.println(vl3);

  if ( vl1 == 8 && vl3 == 9 )
  {
    digitalWrite(r2, HIGH);
    lcd2.setCursor(2, 0);
    lcd2.print("R-N PHASE FAULT");
    lcd2.setCursor(3, 2);
    lcd2.print("VR");
    lcd2.setCursor(3, 3);
    lcd2.print(vl1); // Display the AC voltage on LCD
    lcd2.setCursor(9, 2);
    lcd2.print("VY");
    lcd2.setCursor(9, 3);
    lcd2.print(vl2); // Display the AC voltage on LCD
    lcd2.setCursor(15, 2);
    lcd2.print("VB");
    lcd2.setCursor(15, 3);
    lcd2.print(vl3); // Display the AC voltage on LCD
    lcd2.setCursor(3, 2);
    int i=1;
    while (i<=10)
    {
      display_1();
      display_3();
      i++;
    }


  }
  else if (vl1 == 9 && vl2 == 8)
  {
    digitalWrite(y2, HIGH);
    lcd2.setCursor(3, 0);
    lcd2.print("Y-N PHASE FAULT");
    lcd2.setCursor(3, 2);
    lcd2.print("VR");
    lcd2.setCursor(3, 3);
    lcd2.print(vl1); // Display the AC voltage on LCD
    lcd2.setCursor(9, 2);
    lcd2.print("VY");
    lcd2.setCursor(9, 3);
    lcd2.print(vl2); // Display the AC voltage on LCD
    lcd2.setCursor(15, 2);
    lcd2.print("VB");
    lcd2.setCursor(15, 3);
    lcd2.print(vl3); // Display the AC voltage on LCD
    lcd2.setCursor(3, 2);
    int i=1;
    while (i <= 10)
    {
      display_1();
      display_3();
      i++;
    }

  }
  else if (vl1 == 8 && vl3 == 6)
  {
    digitalWrite(b2, HIGH);
    lcd2.setCursor(3, 0);
    lcd2.print("B-N PHASE FAULT");
    lcd2.setCursor(3, 2);
    lcd2.print("VR");
    lcd2.setCursor(3, 3);
    lcd2.print(vl1); // Display the AC voltage on LCD
    lcd2.setCursor(9, 2);
    lcd2.print("VY");
    lcd2.setCursor(9, 3);
    lcd2.print(vl2); // Display the AC voltage on LCD
    lcd2.setCursor(15, 2);
    lcd2.print("VB");
    lcd2.setCursor(15, 3);
    lcd2.print(vl3); // Display the AC voltage on LCD
    lcd2.setCursor(3, 2);
    int i=1;
    while (i <= 10)
    {
      display_1();
      display_3();
      i++;
    }
  }
  else if (vl1 == 7 && vl2 == 8&&vl3==9)
  {
    digitalWrite(r2, HIGH);
    digitalWrite(y2, HIGH);
    lcd2.setCursor(3, 0);
    lcd2.print("R-Y PHASE FAULT");
    lcd2.setCursor(3, 2);
    lcd2.print("VR");
    lcd2.setCursor(3, 3);
    lcd2.print(vl1); // Display the AC voltage on LCD
    lcd2.setCursor(9, 2);
    lcd2.print("VY");
    lcd2.setCursor(9, 3);
    lcd2.print(vl2); // Display the AC voltage on LCD
    lcd2.setCursor(15, 2);
    lcd2.print("VB");
    lcd2.setCursor(15, 3);
    lcd2.print(vl3); // Display the AC voltage on LCD
    lcd2.setCursor(3, 2);
    int i=1;
    while (i <= 10)
    {
      display_1();
      display_3();
      i++;
    }
  }
  else if (vl1 == 6 && vl2==8&&vl3 == 6)
  {
    digitalWrite(r2, HIGH);
    digitalWrite(b2, HIGH);
    lcd2.setCursor(3, 0);
    lcd2.print("R-B PHASE FAULT");
    lcd2.setCursor(3, 2);
    lcd2.print("VR");
    lcd2.setCursor(3, 3);
    lcd2.print(vl1); // Display the AC voltage on LCD
    lcd2.setCursor(9, 2);
    lcd2.print("VY");
    lcd2.setCursor(9, 3);
    lcd2.print(vl2); // Display the AC voltage on LCD
    lcd2.setCursor(15, 2);
    lcd2.print("VB");
    lcd2.setCursor(15, 3);
    lcd2.print(vl3); // Display the AC voltage on LCD
    lcd2.setCursor(3, 2);
    int i=1;
    while (i <= 10)
    {
      display_1();
      display_3();
      i++;
    }
  }
  else if (vl1 == 7 && vl2 == 7 && vl3 == 6)
  {
    digitalWrite(y2, HIGH);
    digitalWrite(b2, HIGH);
    lcd2.setCursor(3, 0);
    lcd2.print("Y-B PHASE FAULT");
    lcd2.setCursor(3, 2);
    lcd2.print("VR");
    lcd2.setCursor(3, 3);
    lcd2.print(vl1); // Display the AC voltage on LCD
    lcd2.setCursor(9, 2);
    lcd2.print("VY");
    lcd2.setCursor(9, 3);
    lcd2.print(vl2); // Display the AC voltage on LCD
    lcd2.setCursor(15, 2);
    lcd2.print("VB");
    lcd2.setCursor(15, 3);
    lcd2.print(vl3); // Display the AC voltage on LCD
    lcd2.setCursor(3, 2);
    int i=1;
    while (i <= 10)
    {
      display_1();
      display_3();
      i++;
    }
  }
  else if (vl1==5&&vl2 == 4 && vl3 == 4)
  {
    digitalWrite(y2, HIGH);
    digitalWrite(b2, HIGH);
    lcd2.setCursor(1, 0);
    lcd2.print("Y-B-N PHASE FAULT");
    lcd2.setCursor(3, 2);
    lcd2.print("VR");
    lcd2.setCursor(3, 3);
    lcd2.print(vl1); // Display the AC voltage on LCD
    lcd2.setCursor(9, 2);
    lcd2.print("VY");
    lcd2.setCursor(9, 3);
    lcd2.print(vl2); // Display the AC voltage on LCD
    lcd2.setCursor(15, 2);
    lcd2.print("VB");
    lcd2.setCursor(15, 3);
    lcd2.print(vl3); // Display the AC voltage on LCD
    lcd2.setCursor(3, 2);
    int i=1;
    while (i <= 10)
    {
      display_1();
      display_3();
      i++;
    }
  }
  else if (vl1 == 5 && vl2 == 5&&vl3==7)
  {
    digitalWrite(r2, HIGH);
    digitalWrite(y2, HIGH);
    lcd2.setCursor(1, 0);
    lcd2.print("R-Y-N PHASE FAULT");
    lcd2.setCursor(3, 2);
    lcd2.print("VR");
    lcd2.setCursor(3, 3);
    lcd2.print(vl1); // Display the AC voltage on LCD
    lcd2.setCursor(9, 2);
    lcd2.print("VY");
    lcd2.setCursor(9, 3);
    lcd2.print(vl2); // Display the AC voltage on LCD
    lcd2.setCursor(15, 2);
    lcd2.print("VB");
    lcd2.setCursor(15, 3);
    lcd2.print(vl3); // Display the AC voltage on LCD
    lcd2.setCursor(3, 2);
    int i=1;
    while (i <= 10)
    {
      display_1();
      display_3();
      i++;
    }
  }
  else if (vl1 == 4 && vl2 == 6 && vl3 == 3)
  {
    digitalWrite(r2, HIGH);
    digitalWrite(b2, HIGH);
    lcd2.setCursor(1, 0);
    lcd2.print("R-B-N PHASE FAULT");
    lcd2.setCursor(3, 2);
    lcd2.print("VR");
    lcd2.setCursor(3, 3);
    lcd2.print(vl1); // Display the AC voltage on LCD
    lcd2.setCursor(9, 2);
    lcd2.print("VY");
    lcd2.setCursor(9, 3);
    lcd2.print(vl2); // Display the AC voltage on LCD
    lcd2.setCursor(15, 2);
    lcd2.print("VB");
    lcd2.setCursor(15, 3);
    lcd2.print(vl3); // Display the AC voltage on LCD
    lcd2.setCursor(3, 2);
    int i=1;
    while (i <= 10)
    {
      display_1();
      display_3();
      i++;
    }
  }


  else {
    lcd2.setCursor(3, 0);
    lcd2.print("VR");
    lcd2.setCursor(3, 1);
    lcd2.print(vl1); // Display the AC voltage on LCD
    lcd2.setCursor(9, 0);
    lcd2.print("VY");
    lcd2.setCursor(9, 1);
    lcd2.print(vl2); // Display the AC voltage on LCD
    lcd2.setCursor(15, 0);
    lcd2.print("VB");
    lcd2.setCursor(15, 1);
    lcd2.print(vl3); // Display the AC voltage on LCD
    lcd2.setCursor(3, 2);
    lcd2.print("IR");
    lcd2.setCursor(2, 3);
    lcd2.print(il1); // Display the AC voltage on LCD
    lcd2.setCursor(9, 2 );
    lcd2.print("IY");
    lcd2.setCursor(8, 3);
    lcd2.print(il2); // Display the AC voltage on LCD
    lcd2.setCursor(15, 2);
    lcd2.print("IB");
    lcd2.setCursor(14, 3);
    lcd2.print(il3);
    delay(1500);
  }

}
