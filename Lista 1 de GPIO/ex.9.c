#include <avr/io.h>

#define LED1 (1 << PD4)
#define LED2 (1 << PD5)
#define LED3 (1 << PD6)

int main(void) {
    DDRD |= LED1 | LED2 | LED3;

    for(;;)
}