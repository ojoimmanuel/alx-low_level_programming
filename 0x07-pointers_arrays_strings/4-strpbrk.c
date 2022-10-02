#include "main.h"
#define NULL 0

/**
 * _strpbrk - searches string for a set of bytes
 * @s: given string
 * @accept: source
 *
 * Return: pointer to match bytes in initial segmnt of s
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}

	return (NULL);
}
