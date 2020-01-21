

#define F_CPU	4000000UL
#include <avr/io.h>
#include "lcd2.h"
#include <util/delay.h>


int main(void)
{
	lcd_init_4d();
	
	_delay_ms(50);
	
	
	lcd_write_string_4d("khanh");
    while(1){};

	return 0;
}