#include "main.h"

/**
 * clear_bit - sets the value of a  bit to 0 at a given index
 * @n: integer
 * @index: index
 *
 * Return: 1 on success and -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	mask = 1;
	mask = mask << index;
	mask = ~mask;
	*n = *n & mask;

	return (1);
}
