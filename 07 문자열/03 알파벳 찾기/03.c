#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char S[100];
	int posAlp[26], len;   //97~122

	scanf("%s", S);

	len = strlen(S);

	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if ((int)S[j] == i + 97)
			{
				posAlp[i] = j;
				break;
			}
			else
				posAlp[i] = -1;
		}
	}

	for (int i = 0; i < 26; i++)
		printf("%d ", posAlp[i]);

	return 0;
}
