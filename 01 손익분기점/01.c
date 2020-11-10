#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	unsigned long A, B, C, num;
	int boolean = -1;

	scanf("%d %d %d", &A, &B, &C);

	num = A / (C - B);

	if (B >= C)
		printf("%d", -1);
	else
	printf("%d", num + 1);



	return 0;
}
