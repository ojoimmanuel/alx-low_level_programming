#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to newly allocated space in mmry
 * @str: string
 *
 * Return: pointer to new space
 */

char *_strdup(char *str)
{
	int len, i;
	char *array;

	if (array == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}

	array = malloc(len * sizeof(char) + 1);
	if (array == NULL)
		return (NULL);


	for (i = 0; i < len; i++)
	{
		array[i] = str[i];
	}
	array[i] = '\0';

	return (array);
}
