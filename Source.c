#include <stdio.h>

int main(void) {

    int num1 = 2;
    switch (num1)
    {
    case 1:
        printf("�ݶ� ������");
        break;
    case 2:
    {
        int num2 = 5500;
        printf("%d\n", num2);
    }
    break;
    case 3:
        printf("ȯŸ Ȥ�� ���� ���۸� ������");
        break;
    default:
        printf("���� �޴�");
        break;
    }

    return 0;
}