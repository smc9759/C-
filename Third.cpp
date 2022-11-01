#define _CRT_SECURE_NO_WARNINGS
#include <Turboc.h>

void main()
{
	int count;
	scanf("%d", &count);
	int i = 1;

	while(1)
	{
		i++;

		if ( i % 2 != 0)
			continue;
		/*
		count--;

		if (count == 0)
			break;
		*/
		printf("%d\n",i);

		if (i == count)
		break;


		
	}


}
