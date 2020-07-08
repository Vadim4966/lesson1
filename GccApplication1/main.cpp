/*
 * GccApplication1.cpp
 *
 * Created: 7/8/2020 00:46:55
 * Author : Vadim
 */ 


#define F_CPU 1000000U

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>


ISR(INT0_vect)
{
	PORTD |= (1 << 6);
	_delay_ms(700);
	PORTD &= ~(1 << 6);
}

int main(void)
{
	
	
	
	DDRD |= (1 << 5)|(1 << 6)|(1 << 7);
	DDRB |= (1 << 0);
	
	DDRC &= ~((1 << 0)|(1 << 1)|(1 << 2)|(1 << 3));
	PORTC &= ~((1 << 0)|(1 << 1)|(1 << 2)|(1 << 3));
	
	DDRD &= ~(1 << 2);
	PORTD &= ~(1 << 2);
	MCUCR = (1 << ISC01)|(1 << ISC00)|(1 << ISC11)|(1 << ISC10);
	GICR = (1 << INT0);
	
	sei();
	
    while (1) 
    {
		
		
		PORTD |= (1 << 5);
		_delay_ms(500);
		PORTD &=~ (1 << 5);
		_delay_ms(500);
		
		
    }
}

