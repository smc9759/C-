#include <stdio.h>

int main()
{
    char s1[6] = "Hello";    // 이미 선언된 배열에 문자열을 할당하면 컴파일 에러 발생

    printf("%s\n", s1);    // Hello: %s로 문자열 출력

    return 0;
}