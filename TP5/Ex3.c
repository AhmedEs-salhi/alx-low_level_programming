#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *stringReverser(char *str)
{
	int length, i, j;
	char *reversedString;

	length = strlen(str);
	reversedString = malloc(sizeof(char) * length);	

	i = j = 0;
	while (i < length)
		i++;
	while (i--)
		reversedString[j++] = str[i];

	return (reversedString);
}

int main()
{
	char *str = "resooser";
	char *firstHalf, *secondHalf;
	char *resultString;
	int i, j, k;

	i = j = k = 0;
	firstHalf = malloc(sizeof(char) * strlen(str) / 2);
	secondHalf = malloc(sizeof(char) * strlen(str) / 2);
	resultString = malloc(sizeof(char) * strlen(str) / 2);

	while (i < (int)(strlen(str) / 2))
		firstHalf[k++] = str[i++];

	if (strlen(str) % 2 != 0)
		i++;

	while (str[i] != '\0')
		secondHalf[j++] = str[i++];

	resultString = stringReverser(secondHalf);
	if (!(strcmp(firstHalf, resultString)))
		printf("%s Is palindrom\n", str);
	else
		printf("%s Is not palindrom\n", str);

	return (0);
}
