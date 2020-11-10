#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char wrd[1000000];
	int len_wrd, num_space = 0;

	scanf("%[^\n]s", wrd);

	len_wrd = strlen(wrd);

	for (int i = 0; i < len_wrd; i++)
	{
		if ((int)wrd[i] == 32)
			num_space++;
	}
	if ((int)wrd[0] == 32)
		num_space--;

	len_wrd--;
	if ((int)wrd[len_wrd] == 32)
		num_space--;

	printf("%d", num_space + 1);

	return 0;
}
