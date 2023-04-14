#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
    lcd.begin(16, 2);
    lcd.setCursor(1, 0);
  lcd.print("ELETTROMAGNETE");
  pinMode(7, INPUT);
  pinMode(8, OUTPUT);
  
}


void loop( ) {
  switchState = digitalRead(7);
     if (switchState == LOW){
  lcd.setCursor(6, 1);
    lcd.print("OFF");
    digitalWrite(8,LOW);
    }
    else {
  lcd.setCursor(6, 1);
lcd.print("ON ");
  digitalWrite(8, HIGH);
 }
}
