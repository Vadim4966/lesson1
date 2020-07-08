/*
 * GccApplication1.cpp
 *
 * Created: 7/8/2020 00:46:55
 * Author : Vadim
 */ 


#define F_CPU 1000000U

#include <avr/io.h>
#include <util/delay.h>




int main(void)
{
	
	
	
	DDRD |= (1 << 5)|(1 << 6)|(1 << 7);
	DDRB |= (1 << 0);
	
	DDRC &= ~((1 << 0)|(1 << 1)|(1 << 2)|(1 << 3));
	PORTC &= ~((1 << 0)|(1 << 1)|(1 << 2)|(1 << 3));
	
	
    while (1) 
    {
		if(!(PINC & (1 << 0)))
		{
			PORTD |= (1 << 6);
		}
		
		PORTD |= (1 << 5);
		_delay_ms(500);
		PORTD &=~ (1 << 5);
		_delay_ms(500);
		
		PORTD &= ~(1 << 6);
    }
}

