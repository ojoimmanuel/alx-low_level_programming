#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: integer
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i, j;
	unsigned long int x;

	j = 0;
	for (i = 63; i >= 0; i--)
	{
		x = (n >> i) & 1;
		if (x == 1)
			j = 1;
		if (j == 1)
			_putchar(((n >> i) & 1) + '0');
	}

	if (n == 0)
		_putchar('0');
}
