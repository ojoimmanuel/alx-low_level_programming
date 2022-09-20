#include "main.h"

/**
 * puts_half - print half of string
 * @str: string
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int len = 0, i = 0, j;

	while (str[len] != '\0')
	{
		len++;
	}
	if ((len % 2) == 0)
		j = len / 2;
	else
		j = (len + 1) / 2;

	for (i = j; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
