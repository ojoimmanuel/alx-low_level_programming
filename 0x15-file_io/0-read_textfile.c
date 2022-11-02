#include "main.h"

/**
 * read_textfile - fxn to read a text file and print to standard output
 * @filename: name of file
 * @letters: number of letters
 *
 * Return: number of letters if success, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;

	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
		return (0);

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
		return (0);

	buf[letters + 1] = '\0';
	close(fd);

	bytes_written = write(STDOUT_FILEN), buf, bytes_read);
	if (bytes_written == -1)
		return (0);

	free(buf);

	return (bytes_read);
}
