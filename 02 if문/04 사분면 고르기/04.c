#include <stdio.h>

int main()
{
	int A, B;
	scanf("%d", &A);
	scanf("%d", &B);

	if (A > 0)
	{
		if (B > 0)
			printf("%d", 1);
		else
			printf("%d", 4);
	}
	else
	{
		if (B > 0)
			printf("%d", 2);
		else
			printf("%d", 3);
	}

	return 0;
}
