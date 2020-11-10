#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int num;
	int k = 0;
	char array[1000];
	int arr[1000];
	int lenth;
	int sum = 0;
	int booll = 1;
	int temp = 0;

	scanf("%d", &num);

	while (booll)
	{
		sum = 0;
		scanf("%s", array);
		lenth = strlen(array);

		for (int i = 0; i < lenth; i++)
		{
			temp = 0;
			for (int j = 0; j <= i; j++)
			{
				if (array[j] == 'O')
					temp++;
				if (array[j] == 'X')
					temp = 0;
			}
			sum += temp;
		}

		arr[k] = sum;
		k++;
		if (k == num)
			booll = 0;
	}

	for (int i = 0; i < num; i++)
		printf("%d\n", arr[i]);

	return 0;
}
