#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int subNum;
	double  score[1000], sum = 0, gt = 0;

	scanf("%d", &subNum);

	for (int i = 0; i < subNum; i++)
	{
		scanf("%lf", score + i);
		if (score[i] > gt)
		{
			gt = score[i];
		}
	}

	for (int i = 0; i < subNum; i++)
	{
		score[i] = score[i] / gt * 100;
	}

	for (int i = 0; i < subNum; i++)
	{
		sum += score[i];
	}

	printf("%g", sum / (double)subNum);

	return 0;
}
