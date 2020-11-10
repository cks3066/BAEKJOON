#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int C;
	int score[1000];
	double overAvg[1000];

	scanf("%d", &C);

	for (int i = 0; i < C; i++)
	{
		int numStdnt = 0, sum = 0, numOverAvg = 0;
		double avg;

		scanf("%d", &numStdnt);

		for (int j = 0; j < numStdnt; j++)
		{
			scanf("%d", score + j);
			sum += score[j];
		}

		avg = (double)sum / (double)numStdnt;

		for (int k = 0; k < numStdnt; k++)
		{
			if ((double)score[k] > avg)
				numOverAvg++;
		}

		overAvg[i] = (double)numOverAvg / (double)numStdnt;

	}

	for (int i = 0; i < C; i++)
	{
		printf("%.3f%%\n", overAvg[i] * 100);
	}

	return 0;
}
