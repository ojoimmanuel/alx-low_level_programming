#include "main.h"

/**
 * _isalpha - checks for alphabet 
 * @c: c is a variable
 *
 * Return: 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
