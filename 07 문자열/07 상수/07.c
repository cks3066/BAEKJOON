#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char A[4], B[4];
	int num_A, num_B;
	char temp;

	scanf("%s", A);
	scanf("%s", B);

	temp = A[0];
	A[0] = A[2];
	A[2] = temp;

	temp = B[0];
	B[0] = B[2];
	B[2] = temp;

	num_A = 100 * ((int)A[0] - 48) + 10 * ((int)A[1] - 48) + ((int)A[2] - 48);
	num_B = 100 * ((int)B[0] - 48) + 10 * ((int)B[1] - 48) + ((int)B[2] - 48);

	if (num_A >= num_B)
		printf("%d", num_A);
	else
		printf("%d", num_B);

	return 0;
}
