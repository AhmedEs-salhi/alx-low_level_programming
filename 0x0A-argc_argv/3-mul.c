#include <stdio.h>
#include <stdlib.h>

/**
 * main - The main function
 * @argc: the counter argument
 * @argv: the vector argment
 *
 * Return: returns the multiplication
 *         of the arguments received
 */

int main(int argc, char *argv[])
{
	int i, mult;

	mult = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return 1;
	}
	
	return (0);
}
