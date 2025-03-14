#include "main.h"
#include <string.h>

/**
 * create_file - Creates a file with -rw---- permissions
 *
 * @filename: Name of the file to be created
 * @text_content: content of the file newly created
 *
 * Return: 1 in case of success. -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t _open;

	if (!filename)
		return (-1);

	creat(filename, S_IRUSR | S_IWUSR);
	_open = open(filename, O_CREAT | O_RDWR);
	write(_open, text_content, strlen(text_content));
	close(_open);

	return (1);
}
