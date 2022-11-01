#include <Turboc.h>

int main()
{
	int decimal = 13;
	int binary[20] = {0,};

	int position = 0;
	while(1)
	{
		binary[position] = decimal %2;
		decimal = decimal /2;

		position++;

		if(decimal ==0)
			break;
	}
	//position-1
	//sizeof(binary) / sizeof(int) -1 -> 원래 binary는 0으로 초기화되어있고, 길이가 4밖에 안되서 1101을 ㅂ제외한 나머지값은 0이다. 이걸 출력하는 것은 불필요하다
	for (int i = sizeof(binary) / sizeof(int) -1; i>=0; i--)
	{
		printf("%d",binary[i]);
	}

    return 0;
}
