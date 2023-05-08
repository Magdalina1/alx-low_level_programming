#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * create_file - Create a function that creates a file.
 * @filename: the name of the file to read.
 * @text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 if failed.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	len = strlen(text_content);
	bytes_written = write(fd, text_content, len);

	if (bytes_written != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}
