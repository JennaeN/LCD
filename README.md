LCD
====

Creates a functional LCD display which scrolls a message on the top and bottom line of the screen. 
API - LCD.h
My Application Program Interface connects the following LCD functions to main.c:

void initSPI();	
void LCDinit();	
void LCDclr(); 
void cursorToLineOne();	
void cursorToLineTwo(); 
int pollButton();	
void writeDatatByte(char dataByte);
void writeString(char * string);	
void scrollString(char * string1, char * string2);	

USAGE -LCD.h connects my main.c and my LCD.c.
It initializes the SPI and the LCD screen, clears the LCD screens, and the prints 
two messages to the screen which scroll across the LCD repetitively until the program is terminated.
