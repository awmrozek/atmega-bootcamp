/*
 * Atmega16Test.c
 *
 * Created: 2025-01-23 17:48:57
 * Author : welw
 */ 

#define F_CPU 1000000
// The following code is an abomination
#include <util/delay.h>
#include <avr/io.h>



#include <avr/io.h>

void T0delay();

/*int main(void)
{
	DDRB = 0xFF;		// PORTB as output
	
	while(1)  		// Repeat forever
	{
		PORTB=0x55;
		T0delay();  	// Give some delay
		PORTB=0xAA;
		T0delay();
	}
}*/

void T0delay()
{
	TCNT0 = 0x25;  		/* Load TCNT0*/
	TCCR0 = 0x01;  		/* Timer0, normal mode, no pre-scalar */
	
	while((TIFR&0x01)==0);  /* Wait for TOV0 to roll over */
	TCCR0 = 0;
	TIFR = 0x1;  		/* Clear TOV0 flag*/
}


int main(void)
{
	DDRA = 0xFF;
	DDRB = 0xFF;
	DDRC = 0xFF;
	DDRD = 0xFF;
	
    while (1)
    {
		//_delay_ms(100);
		T0delay();
		PORTA = 0xFF;
		PORTB = 0xFF;
		PORTC = 0xFF;
		PORTD = 0xFF;
		//_delay_ms(100);
		T0delay();
		PORTA = 0x00;
		PORTB = 0x00;
		PORTC = 0x00;
		PORTD = 0x00;
    }
}

