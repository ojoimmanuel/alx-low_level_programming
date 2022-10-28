#include "main.h"

/**
 * _strlen - get length of string
 * @s: string
 *
 * Return: int length
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * power - calculate power
 * @num: given number
 * @exp: exponential
 *
 * Return: result
 */

int power(int num, int exp)
{
	int i, result;

	result = 1;
	for (i = 0; i < exp; ++i)
		result *= num;

	return (result);
}

/**
 * binary_to_uint - convertsa binary number to an unsigned int
 * @b: binary
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	int len, i;

	sum = 0;
	if (b == NULL)
		return (sum);
	len = _strlen(b);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum += (b[i] - '0' * power(i, len - i - 1);
	}
	return (sum);

}
