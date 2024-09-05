#include <avr/io.h>

#define botao (1 << PD2)
#define led (1 << PD3)

int main(void) {
    DDRD &= ~botao;

    while (1) {
        if (PIND & botao != 0) {
            PORTD |= led;
        } else {
            PORTD &= ~led;
        }
    }
}