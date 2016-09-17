//#define F_CPU 8000000UL

#include <avr/io.h>


#include <util/delay.h>

int main(void){

	DDRA = 0xff;

	PORTB = PORTB | ( 1 << PB0);
			while(1){
				if( bit_is_clear(PINB, PB0) )
				{
					PORTA = 0b11111111;
					_delay_ms(40);
					PORTA = 0b11111110;
					_delay_ms(40);
					PORTA = 0b11111101;
					_delay_ms(40);
					PORTA = 0b11111011;
					_delay_ms(40);
					PORTA = 0b11110111;
					_delay_ms(40);
					PORTA = 0b11101111;
					_delay_ms(40);
					PORTA = 0b11011111;
					_delay_ms(40);
					PORTA = 0b10111111;
					_delay_ms(40);
					PORTA = 0b01111111;
					_delay_ms(40);
				}
				else{
					PORTA = 0b11111111;
				}

			}
return 0;
}

