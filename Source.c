#include <stdio.h>

int main()
{
	int decimal = 0;
	int binary[4] = { 1, 1, 0, 1 };    // 1101 순서대로 저장됨

	for (int i = 0; i < 4; i++)
	{
		if (3 - i != 0)
		{
			decimal += binary[i] * 2 * (3 - i);
		}
		else
		{
			decimal += binary[i];
		}
	}
	printf("%d\n", decimal);

	return 0;
}