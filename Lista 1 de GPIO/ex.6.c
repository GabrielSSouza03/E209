#include <avr/io.h>

#define p6 (1 << PD6)
#define p7 (1 << PD7)

int main(void) {
    DDRD |= p6 | p7; 

    DDRD &= ~p6; // Apaga o bit correspondente ao pino D6

   for;;
}