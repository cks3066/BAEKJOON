#include <stdio.h>

int main()
{
	int A, B;
	scanf("%d %d", &A, &B);

	if (B >= 45)
		B -= 45;
	else
	{
		B += 15;
		if (A == 0)
			A = 23;
		else
			A--;
	}

	printf("%d %d", A, B);

	return 0;
}
