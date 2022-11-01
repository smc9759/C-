#define _CRT_SECURE_NO_WARNINGS
#include <Turboc.h>

int main()
{
    int i = 1;

    for (;;)
    {
        if ( i % 10 != 3)
		{
			i++;
			continue;
		}
        if ( i == 113)
			break;

        printf("%d ", i);
        i++;
    }

    return 0;
}