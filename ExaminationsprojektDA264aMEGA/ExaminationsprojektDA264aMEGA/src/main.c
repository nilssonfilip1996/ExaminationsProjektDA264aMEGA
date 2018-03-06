/**
 * Author(s): Filip And Jesper
 * USART1
 */
#include <asf.h>
#include "usart1.h"
#include <stdio.h>
#include "../delay/delay.h"
#include "../lcd/lcd.h"

char rec;

int main (void)
{
	/* Insert system clock initialization code here (sysclk_init()). */
	
	board_init();
	sei();
	usart1_init();
	lcd_init();
	lcd_clear();
	delay_ms(50);
	
	while(1){
		//Do nothing
	}
}
