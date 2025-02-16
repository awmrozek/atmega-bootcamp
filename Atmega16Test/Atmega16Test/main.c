/*
 * Atmega16Test.c
 *
 * Created: 2025-01-23 17:48:57
 * Author : welw
 */ 

// The following code is an abomination
#include <avr/io.h>


int main(void)
{
	DDRA = 0xFF;
	DDRB = 0xFF;
	DDRC = 0xFF;
	DDRD = 0xFF;
	PORTA = 0xFF;
	PORTB = 0xFF;
	PORTC = 0xFF;
	PORTD = 0xFF;
    while (1) 
    {
    }
}

