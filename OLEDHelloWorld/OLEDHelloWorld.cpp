// Do not remove the include below
#include <Arduino.h>
#include "OLEDHelloWorld.h"
#include "OLEDFourBit10.h"

// LCD
OLEDFourBit lcd(3, 4, 5, 6, 7, 8, 9);
char lcdText[4][21];

//The setup function is called once at startup of the sketch
void setup()
{
	  lcdText[0][20]='\0';
	  lcdText[1][20]='\0';
	  lcdText[2][20]='\0';
	  lcdText[3][20]='\0';

	  lcd.begin(20, 4);
	  lcd.clear();
	  lcd.home();

	  lcd.setCursor(0,0);
	  // ruler: "01234567890123456789"
	  lcd.print("Mode: ");

}

// The loop function is called in an endless loop
void loop()
{
//Add your repeated code here
}
