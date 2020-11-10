#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int N, grp = 0;
	char alp[100];

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int len, num = 0;
		scanf("%s", alp);
		len = strlen(alp);

		for (int j = 0; j < len; j++)
		{
			for (int k = j + 1; k < len; k++)
			{
				if (alp[j] == alp[k] && alp[k] != alp[k - 1])
					num++;
			}
		}
		if (num == 0)
			grp++;
	}
	printf("%d", grp);

	return 0;
}
