#include "main.h"

/**
 * _islower - checks if alphabet is lower character or not
 *
 * Return: 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');	
}
