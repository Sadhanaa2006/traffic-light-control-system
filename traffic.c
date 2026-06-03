#include <reg51.h>

sbit RED    = P1^0;
sbit YELLOW = P1^1;
sbit GREEN  = P1^2;

void delay_ms(unsigned int ms) {
    unsigned int i, j;
    for (i = 0; i < ms; i++) {
        for (j = 0; j < 1275; j++);
    }
}

void main() {
    while (1) {
        // Red ON
        RED = 1; YELLOW = 0; GREEN = 0;
        delay_ms(1000);   // 1 sec

        // Yellow ON
        RED = 0; YELLOW = 1; GREEN = 0;
        delay_ms(500);    // 0.5 sec

        // Green ON
        RED = 0; YELLOW = 0; GREEN = 1;
        delay_ms(1000);   // 1 sec
    }
}
