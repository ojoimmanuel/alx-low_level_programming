#include "main.h"

/**
 * pow - calculate power
 * @num: given number
 * @exp: exponential
 *
 * Return: result
 */

int pow(int num, int exp)
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

	len = 0;
	sum = 0;
	if (b == NULL)
		return (0);
	while (b[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum += (b[i] - '0' * pow(2, len - i - 1);
	}
	return (sum);

}
