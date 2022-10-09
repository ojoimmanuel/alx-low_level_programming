#include "main.h"
#include <stdlib.h>

/**
 * _strlen - get string length
 * @string: given string
 *
 * Return: length
 */
/*
int _strlen(char *string)
{
	int len;

	len = 0;
	while (string[len] != '\0')
	{
		len++;
	}
	
	return (len);
}

/**
 * string_nconcat - concat two strings
 * @s1: string 1
 * @s2: string 2
 * @n: integer that limits s2 string characters to use
 *
 * Return: pointer to mmry with concat string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, lenp, i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* get lenth of string*/
	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	/*determine size of concat pointer mmry space*/
	if (n >= len2)
		lenp = len1 + len2 + 1;
	else
	{
		lenp = len1 + n + 1;
		len2 = n;
	}
	str = malloc(lenp);
	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
