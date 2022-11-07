/*
 * ArrayOfLEDs.c
 *
 * Created: 07/11/2022 17:22:03
 * Author : Ahmed Esmail
 */ 

#include <avr/io.h>


int main(void)
{
    DDRA = 0xff;
	DDRB = 0xff;
	DDRC = 0xff;
	DDRD = 0xff;
    while (1) 
    {
		PORTA = 0xff;
		PORTB = 0xff;
		PORTC = 0xff;
		PORTD = 0xff;
    }
}

