#include "main.h"

/**
 *  read_textfile - function that reads a text file and prints it to
 *  the POSIX standard output
 *
 *  @letters: number of letters it should read and print
 *
 *  @filename: text file to be read and printed
 *
 *  Return: actual number of letters it could read and print; return 0 if
 *  the file can not be opened or read, if filename is NULL or if
 *  write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t R, r, w;
	char *buffer;

	r = open(filename, O_RDONLY);
	if (r == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	R = read(r, buffer, letters);

	w = write(STDOUT_FILENO, buffer, R);

	free(buffer);
	close(r);

	return (w);
}
