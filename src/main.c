/*
 * main.c
 *
 * Created: 5/18/2026 5:54:38 AM
 *  Author: Dhruv
 */ 

#define F_CPU 1000000UL

#include <xc.h>
#include <util/delay.h>  // Provides the precise _delay_ms() function
int main(void)
{
	DDRA |= (1 << 0);
	
    while(1)
    {
		PORTA ^= (1 << 0);
        //TODO:: Please write your application code 
    }
}