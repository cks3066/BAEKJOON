#include <stdio.h>

int main()
{
	int A;
	scanf("%d", &A);
	
	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < i+1; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}
