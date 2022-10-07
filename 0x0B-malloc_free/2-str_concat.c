#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: pointer to concat
 */

char *str_concat(char *s1, char *s2)
{
	/*determine len of each string*/
	int len1 = 0;
	int len2 = 0;
	char *c = 0;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + len1) != '\0')
		len1++;
	while (*(s2 + len2) != '\0')
		len2++;

	/*allocate memory = both lenghts*/
	c = malloc(len1 + len2 + 1);
	if (c == NULL)
		return (NULL);

	/*copy strings one at a time into mmry*/
	while (i < len1)
	{
		*(c + i) = *(s1 + i);
		i++;
	}
	while (j <= len2)
	{
		*(c + len1 + j) = *(s2 + j);
		j++;
	}
	return (c);
}
