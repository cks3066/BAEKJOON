#include <stdio.h>

int main()
{
	int A = 0, arr[1000000] = { 0, };
	int gt, sl;

	scanf("%d", &A);
	for (int i = 0; i < A; i++)
	{
		scanf("%d", arr + i);
	}

	gt = arr[0], sl = arr[0];

	for (int i = 0; i < A; i++)
	{
		if (arr[i] > gt)
			gt = arr[i];
		if (arr[i] < sl)
			sl = arr[i];
	}

	printf("%d %d", sl, gt);

	return 0;
}
