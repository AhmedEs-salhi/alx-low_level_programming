#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strDup(char *str)
{
	char* strDup;
	strDup = malloc(sizeof(char) * strlen(str));
	strDup = str;
	free(str);
	return strDup;
}

int main()
{
	char* str;

	str = strdup("Ahmed");
	printf("My name is %s\n", str);
	return 0;
}
