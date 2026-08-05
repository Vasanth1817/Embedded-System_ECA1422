#include <reg51.h>

unsigned int arr[5] = {1000, 2000, 3000, 4000, 5000};
unsigned long sum = 0;
unsigned char i;

void main()
{
    for(i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }

    while(1);
}