#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int N, boolean = 0, num;
	scanf("%d", &N);
	
	for (int i = 0; 1; i++)
	{
		for (int j = 0; 1; j++)
		{
			if (5 * i + 3 * j == N)
			{
				num = i + j;
				boolean = 1;
			}
			if (3 * j > N)
				break;
		}
		if (5 * i > N)
			break;
	}

	if (boolean == 0)
		printf("%d", -1);
	else
		printf("%d", num);

	return 0;
}
