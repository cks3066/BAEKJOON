#include <stdio.h>

int main()
{
	int A, B;
	int h, t, o;

	scanf("%d", &A);
	scanf("%d", &B);

	h = B / 100;
	t = B / 10 - h * 10;
	o = B - 100 * h - 10 * t;


	printf("%d\n", A * o);
	printf("%d\n", A * t);
	printf("%d\n", A * h);
	printf("%d\n", A * B);

	return 0;
}
