#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i = 0;

	while(i <= argc)
	{
		i++;
	}
	printf("%d\n", argc - 1);
	
	return 0;
}
