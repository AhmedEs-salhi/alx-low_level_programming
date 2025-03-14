#include "main.h"

/**
 * read_textfile - reads an amount of bytes from a file
 *		   and write it to the POSIX standard
 * @filename: The path or the name of the file to read data from
 * @letters: Number of letters to be read from the file
 *
 * Return: The number of bytes actually read successfully
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int openFile;
	char *buffer;
	ssize_t byteNumber;
	ssize_t byteWritten;

	buffer = malloc(sizeof(char) * letters);
	openFile = open(filename, O_RDWR);
	byteNumber = read(openFile, buffer, letters);

	if (!buffer || !filename || openFile == -1 || byteNumber == -1)
		return (0);

	byteWritten = write(1, buffer, byteNumber);
	if (byteWritten == -1)
		return 0;
	free(buffer);
	close(openFile);

	return (byteNumber);
}
