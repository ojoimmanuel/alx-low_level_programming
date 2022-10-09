#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function to allocate mmry using malloc
 * @b: int mmry size to allocate
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
