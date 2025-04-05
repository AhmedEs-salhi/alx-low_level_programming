#include "main.h"

/**
 * main - Entry point
 *
 * @argc: The number of the argument passed
 * @argv: Array of the arguments passed
 *
 * Return: 1 in case of success. Other values otherwise
 */

int main(int argc, char **argv)
{
	int result;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	result = copy_file(argv[1], argv[2]);
	if (result == 98)
	{
		dprintf(2, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	if (result == 99)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (result == 100)
		exit(100);
	printf("result -> %i)\n", result);
	return (0);
}
