void passa() {
  
    char key = pad.getKey();

if(key) {
  if(login) return;
      Serial.println(key);
  pass += key; 

  lcd.setCursor(pass.length(), 1);

lcd.print("*");


}

  if (pass.length() == 7) {
    // выводим в порт
    check();
    pass = "";

  }
}
void check() {
  if(pass == "3491312") {
    login = true;
    
saluda();

  } else {

    falled();

    
    lcd.clear();

lcd.setCursor(0, 0);

lcd.print("Enter password:");
  }
}
