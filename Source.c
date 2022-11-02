#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size;
	scanf("%d", &size);
	int** m = malloc(sizeof(int*) * size);

	for (int col = 0; col < size-1; col++)
	{
		m[col] = malloc(sizeof(int) * size);
	}

	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size-1; j++)
		{
			if (i = j) m[i][j] = 1;
			else m[i][j] = '0';
		}
	}
	//print
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size-1; j++)
		{
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}

	return 0;
}