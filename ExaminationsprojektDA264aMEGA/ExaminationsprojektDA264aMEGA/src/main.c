/**
* Main-file of Mega implementation.
* An interrupt is triggered when a byte is received on the USART1.
* The byte is then fed to the Hamming-decoder to decipher the original message
* Finally, the message is displayed on the lcd-shield.
*
*
* Author(s): Filip Nilsson And Jesper Anderberg
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
	board_init();
	sei();
	usart1_init();
	lcd_init();
	lcd_clear();
	delay_ms(50);
	uart_init();
	
	while(1){
		// do nothing
	}
}
