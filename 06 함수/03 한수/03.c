#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int hans(int n);
// precondition : 자연수 n 은 1000보다 작거나 같다.
// postdondirion : 입력된 n이 한수인지 아닌지 ture,false 값으로 리턴한다.
//				   한수이면 1, 한수가 아니면 false

int main()
{
	int N, numHans = 0;

	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		if (hans(i) == 1)
			numHans++;
	}

	printf("%d", numHans);

	return 0;
}

int hans(int n)
{
	int boolean = 1;
	int Bnumber = n % 10;
	int temp = n / 10;
	int arr[5];
	int i = 0;

	while (1)
	{
		int Fnumber = temp % 10;
		temp /= 10;
		
		arr[i++] = Fnumber - Bnumber;

		Bnumber = Fnumber;

		if (temp < 1)
			break;
	}

	for (int j = 1; j < i; j++)
	{
		if (arr[j] == arr[j - 1])
			boolean = 1;
		else
			boolean = 0;
	}
	return boolean;
}
