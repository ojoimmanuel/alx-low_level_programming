#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: integer
 *
 * Return: interger
 */

int find_sqrt(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x > n / x)
		return (find_sqrt(n, x - 1));
	else if (x < n / x)
		return (find_sqrt(n, x + 1));
	else
		return (-1);
}

int _sqrt_recursion(int n)
{
	int x = 1;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (find_sqrt(n, x));
}

