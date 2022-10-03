#include "main.h"

/**
 * _strstr - finds a substring
 * @haystack: string to search from
 * @needle: string to search
 *
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, start = 0, len = 0;

	while (needle[len] != '\0')
		len++;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; j < len && haystack[i] == needle[j]; j++, i++)
		{
			if (j == 0)
			{
				start = i;
			}
			if (j == len - 1)
			{
				return (haystack + start);
			}
		}
	}

	return (0);
}
