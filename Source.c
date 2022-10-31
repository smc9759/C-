#include <stdio.h>

int main()
{
    unsigned char i = 1;
    while (i != 0)  // i < 129 -> 128 is 1000 0000 , i's Max 128
    {
        printf("%u\n", i);
        i <<= 1;
    }
    return 0;
}