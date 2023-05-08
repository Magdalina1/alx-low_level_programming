#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output.
 * @filename: the name of the file to read.
 * @letters: the number of the letters to read and print.
 * Return: the actual number of letter read and printed,
 * or 0 if and error occurs.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nbytes;
	char *buffer;
	int fd;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buffer = (char *) malloc((letters + 1) * sizeof(char));

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	nbytes = read(fd, buffer, letters);

	close(fd);
	if (nbytes == -1)
	{
		free(buffer);
		return (0);
	}

	buffer[nbytes] = '\0';
	nbytes = write(STDOUT_FILENO, buffer, nbytes);

	free(buffer);

	return (nbytes);
}

