#include <DHT.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27, 20, 4);

#define DHT_PIN 2
#define DHT_TYPE DHT22   // DHT 22  (AM2302)

DHT dht(DHT_PIN, DHT_TYPE);

void display_data()
{
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  
  lcd.setCursor (0, 0); 
  lcd.print ("t: ");  
  lcd.print (t); 
  lcd.print (" "); 
  lcd.print ((char)223);
        
  lcd.setCursor (0, 1); 
  lcd.print ("H: ");  
  lcd.print (h);    
  lcd.print (" %");  
  
}

void setup()
{
  // init lcd 
  lcd.init();                      
  lcd.backlight();  

  // init temperature 
  // and humidity sensor
  dht.begin();
}

void loop()
{
  display_data();
  delay(2000);
}



