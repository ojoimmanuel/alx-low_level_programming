#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char to initialize the array with
 *
 * Return: NULL if size == 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = (char *) malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			*(array + i) = c;
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
