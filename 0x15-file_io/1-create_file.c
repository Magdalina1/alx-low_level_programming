#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"


/**
 * _strlen - returns the length of a string.
 * @s: the string to measure.
 * Return: the length of s.
 */

size_t _strlen(char *s)
{
	size_t len = 0;

	while (*s++)
		len++;

	return (len);
}

/**
 * create_file - Create a function that creates a file.
 * @filename: the name of the file to read.
 * @text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	bytes_written = write(fd, text_content, _strlen(text_content));

	if (bytes_written == -1)
		return (-1);

	close(fd);
	return (1);
}
