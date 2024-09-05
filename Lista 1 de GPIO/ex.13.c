#include <avr/io.h>

#define botao1 (1 << PB0)
#define botao2 (1 << PB1) 
#define botao3 (1 << PB2)
#define botao4 (1 << PB3)
#define botao2 (1 << PB4)
#define led1 (1 << PD3)
#define led2 (1 << PC3)

int main(void) {
   
    DDRD |= led1; 
    DDRC |= led2; 

    // Apaga ambos os LEDs
    PORTC &= ~(led1 | led2); 

    for(;;) {
        // Lê o valor de todos os pinos de entrada
        uint8_t input = PINB & (botao1 | botao2 | botao3 | botao4 | BUTTON5)

        // Verifica se todas as entradas são HIGH
        if (input == (botao1 | botao2 | botao3 | botao4 | BUTTON5)) {
            PORTD &= ~led1; // Apaga led1
            PORTC |= led2; // Acende led2 
        }
        // Verifica se os bits estão intercalados
        else if ((input == 0b01010) || (input == 0b10101)) {
            PORTD |= led1; // Acende led1
            PORTC &= ~led2; // Apaga led2
        }
        // Caso contrário, apaga ambos os LEDs
        else {
            PORTD &= ~led1; // Apaga led1
            PORTC &= ~led2; // Apaga led2
        }
    }
}