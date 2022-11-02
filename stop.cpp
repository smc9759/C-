#include <Turboc.h>

int main()
{
    int numArr[3][4] = {    // 세로 크기 3, 가로 크기 4인 int형 2차원 배열 선언
        { 11, 22, 33, 44 },
        { 55, 66, 77, 88 },
        { 99, 110, 121, 132 }
    };

    printf("%d\n", sizeof(numArr));    // 48: 4바이트 크기의 요소가 12(4*3)개이므로 48

	int col = sizeof(numArr[0]) / sizeof(int);

	int row = sizeof(numArr) / sizeof(numArr[0]);

    printf("%d\n", col);    // 4
    printf("%d\n", row);    // 3

    return 0;
}