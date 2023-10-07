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
	if (argc > 1)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
