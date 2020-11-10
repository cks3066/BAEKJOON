#include <stdio.h>

int main()
{
	int A, B, X = 0, Y = 0, Z = 0, cicle = 1;
	
	scanf("%d", &A);

	if (A >= 0 && A < 10)
	{
		X = 0, Y = A;
	}
	else if (A < 100 && A >= 10)
	{
		X = A / 10;
		Y = A - 10 * X;
	}

	while (1)
	{
		Z = X + Y;

		if (Z >= 10)
			Z = Z - ((Z / 10) * 10);

		B = Y * 10 + Z;

		if (B == A)
			break;

		if (B >= 0 && B < 10)
		{
			X = 0, Y = B;
		}
		else if (B < 100)
		{
			X = B / 10;
			Y = B - 10 * X;
		}

		cicle++;

	}

	printf("%d", cicle);

	return 0;
}
