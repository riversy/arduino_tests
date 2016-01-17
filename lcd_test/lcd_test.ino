#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);
String lastLine = "";

void setup()
{
  // initialize the lcd 
  lcd.init();                      
 
  // Print a message to the LCD.
  
  lcd.backlight();  
  lcd.print("Hello, World!");  
  lcd.setCursor (0, 1); 
  lcd.print ("");    

  lcd.setCursor (0, 2); 
  lcd.print ("");    
}

void loop()
{
 
}



