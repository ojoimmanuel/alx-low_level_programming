#include "main.h"

/**
 * _isupper - checks if char is uppercase
 * @c: c is the character to check
 *
 * Return: 1 if upper, 0 is lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
