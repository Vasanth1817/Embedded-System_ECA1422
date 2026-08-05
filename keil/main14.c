#include <reg51.h>

char msg[] = "Hello World";

void main()
{
    unsigned char i;

    for(i = 0; msg[i] != '\0'; i++)
    {
        P1 = msg[i];      // Send ASCII character to Port 1
    }

    while(1);
}