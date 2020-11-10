#include <stdio.h>

int main()
{
	int A, B;

	while (scanf("%d %d", &A, &B) != EOF)
	{
		printf("%d\n", A + B);

		if (A <= 0 || B >= 10)
			return 0;
	}

	return 0;
}
