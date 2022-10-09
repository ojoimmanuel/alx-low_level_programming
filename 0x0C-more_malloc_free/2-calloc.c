#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate mmry for array
 * @nmemb: num of members
 * @size: num of bytes
 *
 * Return: pointer to allocated mmry
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);

	p = arr;
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (arr);
}
