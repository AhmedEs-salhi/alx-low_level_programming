#include <stdio.h>

/**
 * main - the main function
 * @argc: the counter argument
 * @argv: the vector argument
 *
 * Return: returns every argument it receive
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
