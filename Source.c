#include <stdio.h>
#include <stdlib.h>

int main()
{
	long long*** m = malloc(sizeof(long long**) * 2);

	for (int depth = 0; depth < 2; depth++)
	{
		m[depth] = malloc(sizeof(long long*) * 3);
		for (int row = 0; row < 3; row++)
		{
			m[depth][row] = malloc(sizeof(long long) * 5);
		}
	}
	//�Ʒ��� ������ ������. **m[i] ���� ������ �� ���µ�. 
	// m[i][j]�� �����ϴ� ����, ����, ���� �����̹Ƿ� ����, ���θ� ������ ���� ���� ���ΰ� ���� ���̴�
	/*
	for (int i =0; i<2; i++)
	{
		**m[i]=malloc(sizeof(long long *)*3);
	}
	for ( int i = 0; i<3; i++)
	{
		*m[i]=malloc(sizeof(long long)*5);
	}
*/
	m[1][2][4] = 100;

	printf("%lld\n", m[1][2][4]);

	for (int depth = 0; depth < 2; depth++)
	{
		for (int row = 0; row < 3; row++)
		{
			free(m[depth][row]);
		}
		free(m[depth]);
	}
	/*
		for ( int i = 0; i<5; i++)
		{
			free(m[i]);
		}
		for ( int i = 0; i<3; i++)
		{
			free(*m[i]);
		}
		for (int i =0; i<2; i++)
		{
			free(**m[i]);
		}
	*/
	return 0;
}