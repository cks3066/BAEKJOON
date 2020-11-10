#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int d(int n);
//precondition : n은 양의정수
//postcondition : n과 n의 각 자리수를 더한 값 리턴

int main()
{
	int prnt = 0;
	int arr[10000];


	for(int i = 0; i < 10000; i ++)
	{
		arr[i] = d(i + 1);
	}

	for (int i = 1; i <= 10000; i++)
	{
		int boolean = 1;

		for (int j = 0; j < 10000; j++)
		{
			if (i == arr[j])
				boolean = 0;
		}
		if (boolean == 1)
			printf("%d\n", i);
	}

	return 0;
}

int d(int n)
{
	int ans = n;
	int temp = ans;

	while (1)
	{
		ans += temp % 10;
		temp = temp / 10;

		if (temp < 1)
			break;
	}

	return ans;
}
