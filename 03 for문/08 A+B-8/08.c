#include <stdio.h>

int main()
{
	int A,B,C;
	scanf("%d", &A);
	
	for (int i = 0; i < A; i++)
	{
		scanf("%d %d", &B, &C);
		printf("Case #%d: %d + %d = %d\n", i+1, B, C,B + C);
	}

	return 0;
}
