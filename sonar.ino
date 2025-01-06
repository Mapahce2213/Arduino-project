void sonar() {

    lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("The module 2");

  
    lcd.setCursor(0, 1);
    a=sr04.Distance();
    
    lcd.print(a);
    lcd.setCursor(3, 1);   
    lcd.print("cm");


  for (int i = 0; i < a; i++) {
    Serial.print("_");

    if(a < 10) {
      Serial.println("|");
    }
  }
  Serial.print("-"); 
  
delay(500);






}
