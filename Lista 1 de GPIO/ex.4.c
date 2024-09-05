#include <avr/io.h>

#define botao (1 << PD5)

int main(void) {
    DDRD &= ~botao; 
    PORTD |= botao; // Ativa o resistor de pull-up

    for(;;) {
        if (!(PIND & botao != 0)) {
            // Pino está em nível alto
        } else {
            // Pino está em nível baixo
        }
    }
}