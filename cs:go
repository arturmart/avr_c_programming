//#define F_CPU 8000000UL

#include <avr/io.h>


#include <util/delay.h>

int main(void){

	DDRA = 0xff;

	PORTB = PORTB | ( 1 << PB3);
	PORTB = PORTB | ( 1 << PB2);
	PORTB = PORTB | ( 1 << PB1);
	PORTB = PORTB | ( 1 << PB0);
			while(1){
				if( bit_is_clear(PINB, PB0) )
				{
					PORTA = 0b01111111;
					_delay_ms(10);
					PORTA = 0b10111111;
					_delay_ms(10);
					PORTA = 0b11011111;
					_delay_ms(10);
					PORTA = 0b11101111;
					_delay_ms(10);
					PORTA = 0b11110111;
					_delay_ms(10);
					PORTA = 0b11111011;
					_delay_ms(10)
					;PORTA = 0b11111101;
					_delay_ms(10);
					PORTA = 0b11111110;
					_delay_ms(10);
					PORTA = 0b11111111;
					_delay_ms(100);
				}
				if( bit_is_clear(PINB, PB1) )
				{
					PORTA = 0b01111111;
					_delay_ms(100);
					PORTA = 0b10111111;
					_delay_ms(100);
					PORTA = 0b11011111;
					_delay_ms(100);
					PORTA = 0b11101111;
					_delay_ms(100);
					PORTA = 0b11110111;
					_delay_ms(100);
					PORTA = 0b11111011;
					_delay_ms(100);
					PORTA = 0b11111101;
					_delay_ms(100);
					PORTA = 0b11111110;
					_delay_ms(100);
					PORTA = 0b11111100;
					_delay_ms(10);
					PORTA = 0b11111000;
					_delay_ms(10);
					PORTA = 0b11110000;
					_delay_ms(10);
					PORTA = 0b11100000;
					_delay_ms(10);
					PORTA = 0b11000000;
					_delay_ms(10);
					PORTA = 0b10000000;
					_delay_ms(10);
					PORTA = 0b00000000;
					_delay_ms(1000);
					PORTA = 0b10000000;
					_delay_ms(10);
					PORTA = 0b11000000;
					_delay_ms(10);
					PORTA = 0b11100000;
					_delay_ms(10);
					PORTA = 0b11110000;
					_delay_ms(10);
					PORTA = 0b11111000;
					_delay_ms(10);
					PORTA = 0b11111100;
					_delay_ms(10);
					PORTA = 0b11111110;
					_delay_ms(10);
					PORTA = 0b11111111;
					_delay_ms(1000);

				}
				if( bit_is_clear(PINB, PB2) )
				{
					PORTA = 0b00011111;
					_delay_ms(20);
					PORTA = 0b00001111;
					_delay_ms(20);
					PORTA = 0b00000111;
					_delay_ms(20);
					PORTA = 0b00000011;
					_delay_ms(20);
					PORTA = 0b10000001;
					_delay_ms(20);
					PORTA = 0b11000000;
					_delay_ms(20);
					PORTA = 0b11000000;
					_delay_ms(100);
				}
				if( bit_is_clear(PINB, PB3) )
				{
					PORTA = 0b01111111;
					_delay_ms(100);
					PORTA = 0b00111111;
					_delay_ms(100);
					PORTA = 0b00011111;
					_delay_ms(500);
					PORTA = 0b00001111;
					_delay_ms(10);
					PORTA = 0b00000111;
					_delay_ms(10);
					PORTA = 0b00000011;
					_delay_ms(10);
					PORTA = 0b00000001;
					_delay_ms(10);
					PORTA = 0b00000000;
					_delay_ms(1000);
					PORTA = 0b00010000;
					_delay_ms(10);
					PORTA = 0b00011000;
					_delay_ms(10);
					PORTA = 0b00011100;
					_delay_ms(10);
					PORTA = 0b00011110;
					_delay_ms(10);
					PORTA = 0b00011111;
					_delay_ms(500);
					PORTA = 0b00111111;
					_delay_ms(100);
					PORTA = 0b01111111;
					_delay_ms(100);
					PORTA = 0b11111111;
					_delay_ms(1000);
				}

				else{
					PORTA = 0b11111111;
				}

			}
return 0;
}

