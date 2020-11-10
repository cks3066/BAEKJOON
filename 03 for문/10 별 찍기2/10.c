#include <stdio.h>

int main()
{
	int A;
	scanf("%d", &A);
	
	for (int i = A; i > 0; i--)
	{
		for (int j = i - 1; j > 0; j--)
		{
			printf(" ");
		}
		for (int k = 0; k <= A - i; k++)
			printf("*");
		printf("\n");
	}

	return 0;
}
