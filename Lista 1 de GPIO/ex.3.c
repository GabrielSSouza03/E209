#include <avr/io.h>

#define pino1 (1 << PD3)
#define pino2 (1 << PB4)

int main(void)
{
    DDRD |= pino1 | pino2; // Define os pinos como saída

    while (1) {
        // Inverte o estado dos pinos
        PORTD ^= pino1;
        PORTB ^= pino2;
    }
}