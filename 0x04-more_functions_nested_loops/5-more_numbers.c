#include "main.h"

/**
 * more_numbers - more numbers
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 15; j++)
	{
		if (j >= 10)
		{
			_putchar('1');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
