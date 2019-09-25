#elif defined (__AVR_ATtiny13A__)
#define __AVR_ATtiny13A__
#define F_CPU 9600000UL
#include <util/delay.h>
#include <avr/io.h>

main {
    DDRB |= (1<<DDB5);
    while(1) {
        PORTB ^= (1<<PORTB5);
    }
}