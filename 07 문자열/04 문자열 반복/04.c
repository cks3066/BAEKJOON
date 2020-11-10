#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char S[20], prt[200];
	int T, R, len;

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		int o = 0;

		scanf("%d", &R);
		scanf("%s", S);

		len = strlen(S);

		for (int j = 0; j < len; j++)
		{
			for (int k = 0; k < R; k++)
			{
				prt[j + k + o] = S[j];
			}
			o += R - 1;
		}

		for (int i = 0; i < len * R; i++)
		{
			printf("%c", prt[i]);
		}
		printf("\n");
	}
   
	return 0;
}
