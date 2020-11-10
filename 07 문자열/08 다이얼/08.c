#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char phnb[15];
	int len, tmFcl = 0;

	scanf("%s", phnb);

	len = strlen(phnb);

	for (int i = 0; i < len; i++)
	{
		switch (phnb[i])
		{
		case 'A':
		case 'B':
		case 'C':
			tmFcl += 3;
			break;
		case 'D':
		case 'E':
		case 'F':
			tmFcl += 4;
			break;
		case 'G':
		case 'H':
		case 'I':
			tmFcl += 5;
			break;
		case 'J':
		case 'K':
		case 'L':
			tmFcl += 6;
			break;
		case 'M':
		case 'N':
		case 'O':
			tmFcl += 7;
			break;
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
			tmFcl += 8;
			break;
		case 'T':
		case 'U':
		case 'V':
			tmFcl += 9;
			break;
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
			tmFcl += 10;
			break;
		default:
			break;
		}
	}

	printf("%d", tmFcl);

	return 0;
}
