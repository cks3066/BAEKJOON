#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A, B, C, result, temp, num = 0;
	int prt[10] = { 0, };
	int go = 1;
	int arr[20];
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);

	result = A * B * C;
	temp = result;

	while (go)
	{
		arr[num] = temp % 10;
		temp = temp / 10;
		num++;
		if (temp < 1)
			go = 0;
	}

	for (int i = 0; i < num; i++)
	{
		switch (arr[i])
		{
		case 0:
			prt[0]++;
			break;
		case 1:
			prt[1]++;
			break;
		case 2:
			prt[2]++;
			break;
		case 3:
			prt[3]++;
			break;
		case 4:
			prt[4]++;
			break;
		case 5:
			prt[5]++;
			break;
		case 6:
			prt[6]++;
			break;
		case 7:
			prt[7]++;
			break;
		case 8:
			prt[8]++;
			break;
		case 9:
			prt[9]++;
			break;
		}
	}

	
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", prt[i]);
	}

	return 0;
}
