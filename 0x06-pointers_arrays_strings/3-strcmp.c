#include "main.h"

/**
 * *_strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1 != '\0')
	{
		if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];
			break;
		}
		i++;
	}

	return (j);
}
