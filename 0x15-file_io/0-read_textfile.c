#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
	FILE *fp;
	char *buffer;
	size_t bytes_read;

	if (filename == NULL)
	{
		return (0);
	}

	fp = fopen(filename, "r");

	if (fp == NULL)
	{
		return (0);
	}

	buffer = malloc(letters + 1);

	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	bytes_read = fread(buffer, 1, letters, fp);

	if (bytes_read < letters && ferror(fp) != 0)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}
	buffer[bytes_read] = '\0';
	printf("%s", buffer);

	free(buffer);
	fclose(fp);

	return (bytes_read);
}

