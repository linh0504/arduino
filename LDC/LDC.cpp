#include <LiquidCrystal.h>
LiquidCrystal lcd(10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0);// chân k?t n?i v?i arduino
String s[2] = {"OFF", "ON "};//m?ng ch?a 2 tr?ng thái
bool state = 0;// bi?n hàm tr?ng thái 
void setup() {
  lcd.begin(16, 2);
  pinMode(11, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(11) == 0){
    state = !state;
    delay(100);
  }
  lcd.setCursor(0, 0);
  lcd.print(s[state]);
  delay(100);
}
