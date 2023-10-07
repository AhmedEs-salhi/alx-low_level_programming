#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main programe function
 * @argc: how much words written in the command prompt
 * @argv: a one dimentional array
 *
 * Return: returns the number of the words written in
 *         the command prompt
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
