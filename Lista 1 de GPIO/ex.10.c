#include <avr/io.h>

#define in1 (1 << PD0)
#define in2 (1 << PD1)
#define in3 (1 << PD2)

int main(void) {
    DDRD &= p1 & in2 & in3;

   for(;;)
}