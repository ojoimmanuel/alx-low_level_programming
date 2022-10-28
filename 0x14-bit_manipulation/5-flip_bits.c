#include "main.h"

/**
 * flip_bits - return the number of bit to flip to get another
 * @n: integer 1
 * @m: integer 2
 * @index: index
 *
 * Return: number of bit to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sum;
	unsigned long int xor;

	sum = 0;
	xor = n ^ m;
	while (xor)
	{
		sum += xor & 1;
		xor = xor >> 1;
	}

	return (sum);
}
