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
	int open_from, close_from;
	int open_to, write_to, close_to;
	char *buffer = malloc(sizeof(char) * 1024);

	open_from = open(file_from, O_RDONLY);
	open_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0666);
	if (open_from == -1)
		return (98);

	read(open_from, buffer, 1024);
	write_to = write(open_to, buffer, strlen(buffer));
	if (open_to == -1 || write_to == -1)
		return (99);
	close_from = close(open_from);
	if (close_from == -1)
	{
		dprintf(2, "Error: Can't close the fd %d\n", open_from);
		return (100);
	}
	close_to = close(open_to);
	if (close_to == -1)
	{
		dprintf(2, "Error: Can't close the fd %d\n", open_to);
		return (100);
	}

	return (1);
}
