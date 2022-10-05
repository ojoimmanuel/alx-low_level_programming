#include "main.h"

/**
 * _abs - computes absolute value of a number
 * @n: n is a variable
 *
 * Return: 0 (Success)
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
	_putchar('\n');
}
