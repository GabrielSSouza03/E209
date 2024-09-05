#include <avr/io.h>

#define botao (1 << PD0)
#define led (1 << PD1)

int main(void) {
    DDRD |= led; 

    while (1) {
        if (PIND & botao != 0) {
            PORTD ^= led;
        }
    }
}
