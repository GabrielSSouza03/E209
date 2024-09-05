#include <avr/io.h>

#define botao (1 << PD0)
#define led1 (1 << PD1)
#define led2 (1 << PD3)

int main(void) {
    DDRD |= led1 | led2; 

    for(;;){
        if (PIND & botao != 0) {
            PORTD ^= led1;
            PORTD ^= led2;
        }
    }
}