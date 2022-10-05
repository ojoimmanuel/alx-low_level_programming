#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: new concat string
 * @src: second string
 * @n: number of word to concat
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
