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
	ssize_t _open, _creat, _write;

	if (!filename)
		return (-1);
	if (!text_content)
	{
		_creat = creat(filename, S_IRUSR | S_IWUSR);
		if (_creat == -1)
			return (-1);
		return (1);
	}
	_creat = creat(filename, S_IRUSR | S_IWUSR);
	_open = open(filename, O_CREAT | O_RDWR | O_TRUNC);
	if ((_creat == -1) | (_open == -1))
		return (-1);

	_write = write(_open, text_content, strlen(text_content));
	if (_write == -1)
		return (-1);

	close(_open);

	return (1);
}
