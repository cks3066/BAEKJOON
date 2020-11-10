#include <stdio.h>

int main()
{
	int arr[10];
	int gt,num = 0;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", arr + i);
	}

	gt = arr[0];

	for (int i = 0; i < 9; i++)
	{
		if (arr[i] > gt)
		{
			gt = arr[i];
			num = i;
		}
	}

	printf("%d\n", gt);
	printf("%d\n", num+1);

	return 0;
}
