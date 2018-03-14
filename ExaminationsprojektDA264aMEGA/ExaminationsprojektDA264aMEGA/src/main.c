/**
* Author(s): Filip And Jesper
* USART1
*/
#include <asf.h>
#include "usart1.h"
#include <stdio.h>
#include "../delay/delay.h"
#include "../lcd/lcd.h"
#include "uart.h"
#include "recievedData.h"

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
	uart_init();
	
	while(1){
		// do nothing
		// 		char str[20];
		// 		int counter = 10;
		// 		sprintf(str, "Value: %d\n", counter);
		// 		uart_write_str(str);
		// 		delay_ms(200);
	}
}
