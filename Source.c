#include <stdio.h>

int main(void) {

    int num1 = 2;
    switch (num1)
    {
    case 1:
        printf("콜라를 내보냄");
        break;
    case 2:
    {
        int num2 = 5500;
        printf("%d\n", num2);
    }
    break;
    case 3:
        printf("환타 혹은 닥터 페퍼를 내보냄");
        break;
    default:
        printf("없는 메뉴");
        break;
    }

    return 0;
}