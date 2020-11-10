#include <stdio.h>

int main()
{
	int A;

	scanf("%d", &A);

	if (A % 4 == 0 && A % 100 != 0)
		printf("%d", 1);
	else if (A % 400 == 0)
		printf("%d", 1);
	else
		printf("%d", 0);

	return 0;
}
