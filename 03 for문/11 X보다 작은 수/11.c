#include <stdio.h>

int main()
{
	int A, B, C;
	int arr[10000] = {0, };

	scanf("%d %d", &A, &B);

	for (int i = 0; i < A; i++)
	{
		scanf("%d", &C);
		arr[i] = C;
	}

	for (int i = 0; i < A; i++)
	{
		if (arr[i] < B)
		{
			printf("%d ", arr[i]);
		}
	}

	return 0;
}
