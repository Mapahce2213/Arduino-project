
void starter() {
  digitalWrite(power, HIGH);
lcd.begin(16, 2);

lcd.clear();

lcd.setCursor(0, 0);

lcd.print("Ready");

delay(1000);

lcd.clear();

lcd.setCursor(0, 0);

lcd.print("Loading.");

delay(1000);

lcd.clear();

lcd.setCursor(0, 0);

lcd.print("Loading..");

delay(1000);

lcd.clear();

lcd.setCursor(0, 0);

lcd.print("Loading...");

delay(1000);

lcd.clear();

lcd.setCursor(0, 0);

lcd.print("Loading.");

delay(1000);

lcd.clear();

lcd.setCursor(0, 0);

lcd.print("Loading..");

delay(1000);


lcd.clear();

lcd.setCursor(0, 0);

lcd.print("Loading...");

delay(1000);




lcd.clear();

lcd.setCursor(0, 0);

lcd.print("Welcome to home!");

lcd.setCursor(0, 1);

lcd.print("Enter password!");

delay(1000);

getus = true;


lcd.clear();

lcd.setCursor(0, 0);

lcd.print("Enter password:");

delay(1000);


}

void saluda() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Use remote");
  lcd.setCursor(7, 1);
  lcd.print("Control");
}

void mod1() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("The module 1");
  lcd.setCursor(0, 1);
  lcd.print("ON lamp red");
}
void mod2() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("The module 2");
  lcd.setCursor(0, 1);
  lcd.print("The sonar");
  delay(2000);
  sonarius = true;
}
