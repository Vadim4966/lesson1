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
	
	
	
	DDRD |= (1 << 5);
	
	
	
	
	
    while (1) 
    {
		PORTD |= (1 << 5);
		_delay_ms(500);
		PORTD &=~ (1 << 5);
		_delay_ms(500);
		
		
    }
}

