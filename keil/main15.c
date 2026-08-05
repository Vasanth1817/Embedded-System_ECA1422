#include <reg51.h>

unsigned char hex = 0x7B;
unsigned char hundreds, tens, ones;

void main()
{
    hundreds = hex / 100;
    tens = (hex % 100) / 10;
    ones = hex % 10;

    P0 = hundreds;
    P1 = tens;
    P2 = ones;

    while(1);
}