// Do not remove the include below
#include <Arduino.h>
#include "OLEDHelloWorld.h"
#include "OLEDFourBit10.h"

// LCD
OLEDFourBit lcd(3, 4, 5, 6, 7, 8, 9);
char lcdText[4][21];
int thisChar = 'a';

// Just random noise

//The setup function is called once at startup of the sketch
void setup()
{
	  lcdText[0][20]='\0';
	  lcdText[1][20]='\0';
	  lcdText[2][20]='\0';
	  lcdText[3][20]='\0';

	  lcd.begin(20, 4);
//	  lcd.clear();
//	  lcd.home();

//	  lcd.setCursor(0,0);
//	  lcd.print("Hello World0");

//	  lcd.setCursor(0,1);
//	  lcd.print("Hello World1");
//
//	  lcd.setCursor(0,2);
//	  lcd.print("Hello World2");
//
//	  lcd.setCursor(0,3);
//	  lcd.print("Hello World3");

	  lcd.display();
	  lcd.cursor();
}

void loop() {
	  // reverse directions at 'm':
	  if (thisChar == 'm') {
	    // go right for the next letter
	    lcd.rightToLeft();
	  }
	  // reverse again at 's':
	  if (thisChar == 's') {
	    // go left for the next letter
	    lcd.leftToRight();
	  }
	  // reset at 'z':
	  if (thisChar > 'z') {
	    // go to (0,0):
	    lcd.home();
	    lcd.clear();
	    // start again at 0
	    thisChar = 'a';
	  }
	  // print the character
	  lcd.write(thisChar);
	  // wait a second:
	  delay(1000);
	  // increment the letter:
	  thisChar++;
}

// The loop function is called in an endless loop
//void loop()
//{
//	  // Turn off the display:
//	  lcd.noDisplay();
//	  delay(500);
//	   // Turn on the display:
//	  lcd.display();
//	  delay(500);
//
//}
