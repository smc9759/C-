#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	int row = m; int col = n;
	char** matrix = malloc(sizeof(char*) * row);

	for (int i = 0; i < row; i++)
	{
		matrix[i] = malloc(sizeof(char) * (n + 1));
	}


	for (int j = 0; j < row; j++)
	{
		scanf("%s", matrix[j]);
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (matrix[i][j] == '.') matrix[i][j] = '0';
		}

	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (matrix[i][j] == '*')
			{
				if (j - 1 >= 0 && matrix[i][j - 1] != '*') matrix[i][j - 1] += 1; //(�� ��������)��
				if (j + 1 < col && matrix[i][j + 1] != '*') matrix[i][j + 1] += 1;//��
				if (i - 1 >= 0 && matrix[i - 1][j] != '*') matrix[i - 1][j] += 1; //��
				if (j - 1 >= 0 && i - 1 >= 0 && matrix[i - 1][j - 1] != '*') matrix[i - 1][j - 1] += 1; //�»�
				if (i + 1 < row && matrix[i + 1][j] != '*') matrix[i + 1][j] += 1;//��
				if (j + 1 < col && i + 1 < row && matrix[i + 1][j + 1] != '*') matrix[i + 1][j + 1] += 1;//����
				if (j - 1 >= 0 && i + 1 < row && matrix[i + 1][j - 1] != '*') matrix[i + 1][j - 1] += 1;//����
				if (j + 1 < col && i - 1 >= 0 && matrix[i - 1][j + 1] != '*') matrix[i - 1][j + 1] += 1;//���
			}
		}
	}


	for (int i = 0; i < row; i++)
	{
		printf("%s\n", matrix[i]);
	}

	return 0;
}