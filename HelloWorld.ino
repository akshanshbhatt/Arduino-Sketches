#include <LiquidCrystal.h>
int Con=10;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
//  pinMode(9, OUTPUT);
//  digitalWrite(9,HIGH);
 analogWrite(9, 400);
 analogWrite(6,Con);
 lcd.begin(16,2);
// lcd.setCursor(0, 0);
// lcd.print("H");
}

void loop() {
  analogWrite(6,10);
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 0);
  // print the number of seconds since reset:
 lcd.print("Sanjai Kumar");
 lcd.setCursor(0, 1);
  lcd.print(millis()/1000);
}
