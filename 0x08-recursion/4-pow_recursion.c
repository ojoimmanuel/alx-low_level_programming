#include "main.h"

/**
 * _pow_recursion - find x raised to y
 * @x: integer
 * @y: power
 *
 * Return: interger power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
