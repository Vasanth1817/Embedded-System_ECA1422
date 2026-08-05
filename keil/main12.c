#include <reg51.h>

unsigned int num1 = 300;
unsigned int num2 = 200;
unsigned long result;

void main()
{
    result = (unsigned long)num1 * num2;

    while(1);
}