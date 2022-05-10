/*
 * main.c
 *
 *  Created on: May 10, 2022
 *      Author: Lap Smart
 */

#include<avr/io.h>
#include<util/delay.h>

int main (void){

	DDRA = 0xff ;
	PORTA = 0xf0 ;

	while(1){
		PORTA = 0xff;
		_delay_ms(1000);
		PORTA = 0x00 ;
		_delay_ms(1000);
	}


}
