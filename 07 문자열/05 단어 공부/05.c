#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char wrd[1000000];
	int alp[26] = { 0, };
	int len_wrd;

	scanf("%s", wrd);

	len_wrd = strlen(wrd);

	for (int i = 0; i < len_wrd; i++)
	{
		switch (wrd[i])
		{
		case 'A':
		case 'a':
			alp[0]++;
			break;
		case 'B':
		case 'b':
			alp[1]++;
			break;
		case 'C':
		case 'c':
			alp[2]++;
			break;
		case 'D':
		case 'd':
			alp[3]++;
			break;
		case 'E':
		case 'e':
			alp[4]++;
			break;
		case 'F':
		case 'f':
			alp[5]++;
			break;
		case 'G':
		case 'g':
			alp[6]++;
			break;
		case 'H':
		case 'h':
			alp[7]++;
			break;
		case 'I':
		case 'i':
			alp[8]++;
			break;
		case 'J':
		case 'j':
			alp[9]++;
			break;
		case 'K':
		case 'k':
			alp[10]++;
			break;
		case 'L':
		case 'l':
			alp[11]++;
			break;
		case 'M':
		case 'm':
			alp[12]++;
			break;
		case 'N':
		case 'n':
			alp[13]++;
			break;
		case 'O':
		case 'o':
			alp[14]++;
			break;
		case 'P':
		case 'p':
			alp[15]++;
			break;
		case 'Q':
		case 'q':
			alp[16]++;
			break;
		case 'R':
		case 'r':
			alp[17]++;
			break;
		case 'S':
		case 's':
			alp[18]++;
			break;
		case 'T':
		case 't':
			alp[19]++;
			break;
		case 'U':
		case 'u':
			alp[20]++;
			break;
		case 'V':
		case 'v':
			alp[21]++;
			break;
		case 'W':
		case 'w':
			alp[22]++;
			break;
		case 'X':
		case 'x':
			alp[23]++;
			break;
		case 'Y':
		case 'y':
			alp[24]++;
			break;
		case 'Z':
		case 'z':
			alp[25]++;
			break;
		}
	}

	int gt_Alp = alp[0];
	int index_gt = 0;

	for (int i = 1; i < 26; i++)
	{
		if (gt_Alp < alp[i])
		{
			gt_Alp = alp[i];
			index_gt = i;
		}
	}

	int num_Gt = 0;

	for (int i = 0; i < 26; i++)
	{
		if (gt_Alp == alp[i])
			num_Gt++;
	}

	if (num_Gt > 1)
		printf("?");
	else
	{
		printf("%c", index_gt + 65);
	}

	return 0;
}
