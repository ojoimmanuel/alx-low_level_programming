#include "main.h"

/**
 * _strlen - fxn to return length of string
 * @s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * create_file - fxn to create a file
 * @filename: name of file
 * @text_content: text
 *
 * Return: 1 if success, 0 otherwise
 */

int creat_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int length;

	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		length = 0;
		text_content = "";
	}
	else
		length = _strlen(text_content);

	bytes_written = write(fd, text_content, length);
	if (bytes_written == -1)
		return (-1);
	close(fd);
	return (1);
}
