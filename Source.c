#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {

    int count;
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {//(int j = count -1; j-i>0;j--)
        for (int j = count -1; j > i; j--) //공백을 count-1-i만큼 만든다 
        {
            printf(" ");
        }
        for (int k = 0; k < 2*i-1; k++)// 별을 2n-1개 만든다 k-count <0 2i-1-count<0 count +1 -2i >0 count
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}