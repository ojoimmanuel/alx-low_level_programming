#include "main.h"


/**
 * find_prime - find prime
 * @n: integer
 * @i: divisor
 *
 * Return: integer
 */

int find_prime(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (find_prime(n, i + 1));
}

/**
 * is_prime_number - check if prime
 * @n: integer
 *
 * Return: interger
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 2)
		return (1);
	else
		return (find_prime(n, i));
}
