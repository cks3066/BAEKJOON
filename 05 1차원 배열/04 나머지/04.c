#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[10], num = 0;
	int diff[10];

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", arr + i);
		arr[i] = arr[i] % 42;
		diff[i] = -1;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = i; j < 10; j++)
		{
			if (arr[i] == arr[j])
				diff[i]++;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (diff[i] == 0)
			num++;
	}

	printf("%d", num);

	return 0;
}
