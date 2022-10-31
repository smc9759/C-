#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);

    while (input>=1200)
    {
        input -= 1200;
        printf("%d\n", input);
    }
    //for (scanf("%d", &input); input > 0; input -= 1200)
    //{
    //    printf("%d\n", input);
    //}
    return 0;
}