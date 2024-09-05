#include <avr/io.h>

#define pino2 (1 << PD2)

int main(void)
{
    DDRD |= pino2; // define o pino como saída
    PORTD |= pino2; // acende o bit correspondente ao pino 2
    PORTD &= ~pino2; // apga o bit correspondente ao pino 2

    while (1) { }
}