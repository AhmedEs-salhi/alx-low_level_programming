#include "main.h"

/**
 * append_text_to_file - Function that adds a texte at the end of the file
 *
 * @filename: The name of the file
 * @text_content: The content to add
 *
 * Return: 1 in case of success, -1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t _open;

	if (!filename)
		return (-1);
	_open = open(filename, O_WRONLY | O_APPEND);
	if (_open == -1)
		return (-1);
	if (!text_content)
		return (1);
	write(_open, text_content, strlen(text_content));
	close(_open);

	return (1);
}
