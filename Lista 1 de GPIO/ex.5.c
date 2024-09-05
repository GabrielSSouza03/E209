#include <avr/io.h>

#define botao (1 << PD5)

int main(void) {
    DDRD &= ~botao; 
    PORTD &= ~botao; // desativa o resistor de pull-up

    while (1) {
        if (!(PIND & botao != 0)) {
            // nível alto
        } else {
            //nível baixo
        }
    }
}