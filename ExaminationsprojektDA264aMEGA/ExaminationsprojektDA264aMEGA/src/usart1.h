/*
 * File name: usart1.h
 *
 * Description: Header file for the driver implemented in uart.c
 *
 * Created: 2016-04-05
 * Author: alex.rodzevski@gmail.com and Filip Nilsson
 */ 

#ifndef UART_H_
#define UART_H_

void usart1_init(void);
void usart1_transmit(unsigned char data);
char usart1_getChar(void);

#endif /* UART_H_ */