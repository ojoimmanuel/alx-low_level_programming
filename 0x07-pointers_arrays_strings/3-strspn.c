#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: given string
 * @accept: source
 *
 * Return: no. of bytes in initial segmnt of s consisting of bytes frm accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	unsigned int holder = 0;
	int i = 0, j = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		holder = len;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				len++;
			}
			j++;
		}
		if (holder == len)
		{
			break;
		}
		i++;
	}

	return (len);
}
