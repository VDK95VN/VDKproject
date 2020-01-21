

#include <avr/io.h>
#include <util/delay.h>
#include "lcd.h"


#include <avr/io.h>

int main(void)
{
   DDRA = 0xFF;
   
   int i;
   Lcd4_Init();
   while(1)
   {
	   _delay_ms(3000);
	   Lcd4_Clear();
	   Lcd4_Set_Cursor(1,1);
	   Lcd4_Write_String("electroSome LCD Hello World");
   }
}