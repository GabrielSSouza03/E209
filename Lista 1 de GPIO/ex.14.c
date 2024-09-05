#include <avr/io.h>

#define botao1 (1 << PB1)
#define botao2 (1 << PB2)
#define botao3 (1 << PB3)
#define botao4 (1 << PB4)
#define chave (1 << PD3)

int main(void) {
   
    DDRD |= chave;

    // Habilita o resistor de pull-up
    PORTB |= botao1 | botao2 | botao3 | botao4;

    while (1) {
        // Lê o valor de todos os pinos de entrada
        uint8_t input = PINB & (botao1 | botao2 | botao3 | botao4);

        // Verifica se a sequência foi pressionada
        if (input == (botao1 | botao2 | botao3 | botao4)) {
            PORTD |= chave; // Aciona a fechadura
        } else {
            PORTD &= ~chave; // Desliga a fechadura
        }
    }
}