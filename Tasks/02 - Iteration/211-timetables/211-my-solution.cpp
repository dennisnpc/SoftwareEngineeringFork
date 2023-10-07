#include <stdio.h>

int main()
{
	for (int i = 1; i <= 12; i++)
	{
		printf("\t%d\n", i);

		for (int j = 1; j <= 12; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
		
		printf("\n");
	}
}