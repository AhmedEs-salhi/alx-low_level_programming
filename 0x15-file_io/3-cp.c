#include "main.h"

/**
 * copy_file - Copies the content of a @file_from to @file_to
 *
 * @file_from: The file to copy content from
 * @file_to: The file to copy the content to
 *
 * Return: 1 in case of Success. Other values in case of error
 * of some kind
 */

int copy_file(const char *file_from, const char *file_to)
{
	ssize_t open_from, close_from, read_from;
	ssize_t open_to, write_to, close_to;
	char buffer[1024];

	open_from = open(file_from, O_RDONLY);
	open_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (open_from == -1)
		return (98);

	while ((read_from = read(open_from, buffer, sizeof(buffer))) > 0)
		write_to = write(open_to, buffer, read_from);
	if (read_from < 0)
		return (98);
	if (open_to == -1 || write_to == -1)
		return (99);

	close_from = close(open_from);
	if (close_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", open_from);
		return (100);
	}
	close_to = close(open_to);
	if (close_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", open_to);
		return (100);
	}

	return (1);
}

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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	result = copy_file(argv[1], argv[2]);
	if (result == 98)
	{
		dup2(STDERR_FILENO, STDOUT_FILENO);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (result == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (result == 100)
		exit(100);
	return (0);
}
