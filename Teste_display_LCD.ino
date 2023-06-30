#include <LiquidCrystal.h>
LiquidCrystal lcd (7,6,5,4,3,2);


void setup() {
  lcd.begin (16,2);
  lcd.setCursor (2,0);
  lcd.print ("MECATRONICA");
  delay(3000);
  lcd.clear();

}

void loop() {
 lcd.setCursor (5,0);
 lcd.print ("SENAI");
 lcd.setCursor (7,1);
 lcd.print ("CIC");

}
