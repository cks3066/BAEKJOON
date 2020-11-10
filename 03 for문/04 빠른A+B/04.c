#include <stdio.h>

int main()
{
	int A, B, C;
	scanf("%d", &A);
	
	for (int i = 0; i < A; i++)
	{
		scanf("%d %d", &B, &C);
		printf("%d\n", B + C);
	}

	return 0;
}
