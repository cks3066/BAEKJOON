#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char wrd[200];
	int len, num_wrd = 0;

	scanf("%s", wrd);

	len = strlen(wrd);

	for (int i = 0; i < len; i++)
	{
		if (wrd[i] == 'c')
		{
			if (wrd[i + 1] == '=')
			{
				num_wrd++;
				i++;
			}
			else if (wrd[i + 1] == '-')
			{
				num_wrd++;
				i++;
			}
			else
			{
				num_wrd++;
			}
		}
		else if (wrd[i] == 'd')
		{
			if (wrd[i + 1] == 'z')
			{
				if (wrd[i + 2] == '=')
				{
					num_wrd++;
					i += 2;
				}
				else
				{
					num_wrd += 2;
					i++;
				}
			}
			else if (wrd[i + 1] == '-')
			{
				num_wrd++;
				i++;
			}
			else
			{
				num_wrd++;
			}
		}
		else if (wrd[i] == 'l')
		{
			if (wrd[i + 1] == 'j')
			{
				i++;
				num_wrd++;
			}
			else
			{
				num_wrd++;
			}
		}
		else if (wrd[i] == 'n')
		{
			if (wrd[i + 1] == 'j')
			{
				num_wrd++;
				i++;
			}
			else
			{
				num_wrd++;
			}
		}
		else if (wrd[i] == 's')
		{
			if (wrd[i + 1] == '=')
			{
				num_wrd++;
				i++;
			}
			else
			{
				num_wrd++;
			}
		}
		else if (wrd[i] == 'z')
		{
			if (wrd[i + 1] == '=')
			{
				num_wrd++;
				i++;
			}
			else
			{
				num_wrd++;
			}
		}
		else
		{
			num_wrd++;
		}
	}

	printf("%d", num_wrd);

	return 0;
}
