#include <stdio.h>

int puts2(char *str)
{

	
	int i = 0;
	
	while (str[i])
	{
		i++;
	}

	int j = 0;

	while (j <= i)
	{
		putchar(str[j] + 0);
		j = j + 1;
	}
	putchar('\n');

	return 0;
}
