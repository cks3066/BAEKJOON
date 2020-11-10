#include <stdio.h>

int main()
{
	int A;
	scanf("%d", &A);
	
	for (int i = 0; i < A; i++)
	{
		printf("%d\n", A - i);
	}

	return 0;
}
