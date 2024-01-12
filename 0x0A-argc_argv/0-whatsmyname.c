#include <stdio.h>
#include <stdlib.h>

/**
 * main - the programe function
 * @argc: how much words written in the command prompt
 * @argv: a one dimentional array
 *
 * Return: returns the program name
 *
 */

int main (__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return(0);
}

