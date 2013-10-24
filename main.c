#include <msp430.h>
#include "LCD.h"

/*
 * main.c
 */
int main(void) {
	WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

	char * requiredMsg = "ECE382 is my favorite class! ";
	char * prompt = "Message?";
	char * promptKey = "Press123";

	char * message1 = "Learn from yesterday... ";

	char * message2 = "Live for today... ";

	char * message3 = "Hope for tomorrow. ";


	//SPI initialization function
	initSPI();

	// LCD initialization function
	LCDinit();

	//Clear the LCD screen
	LCDclr();

	//writeDataByte();
	cursorToLineOne();
	writeString(prompt);

	cursorToLineTwo();
	writeString(promptKey);

	int buttonPushed = 0;
	//Poll buttons
	buttonPushed = pollButton();
	//Move a message to the screen

	if (buttonPushed == 1) {
		scrollString(requiredMsg, message1);
	}

	if (buttonPushed == 2) {
		scrollString(requiredMsg, message2);
	}

	if (buttonPushed == 3) {
		scrollString(requiredMsg, message3);
	}
	//scrollString(message1);
	return 0;
}
