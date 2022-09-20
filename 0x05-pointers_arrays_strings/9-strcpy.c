#include "main.h"

/**
 * _strcpy - copies a string pointed to by src to dest
 * @dest: destination buffer
 * @src: source to copy
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
