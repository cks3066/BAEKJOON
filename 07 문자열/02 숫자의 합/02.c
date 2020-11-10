#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int num, sum = 0, len;
	char arr[100];

	scanf("%d", &num);
	scanf("%s", arr);

	len = strlen(arr);

	for (int i = 0; i < len; i++)
	{
		arr[i] = (int)arr[i] - 48;
		sum += (int)arr[i];
	}

	printf("%d", sum);

	return 0;
}
