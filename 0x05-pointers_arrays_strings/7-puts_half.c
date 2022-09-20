#include "main.h"

/**
 * puts_half - print half of string
 * @str: string
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int i = 0, j, high;

	while (str[i] != '\0')
	{
		i++;
	}
	high = i;
	j = high / 2;
	while (j <= high)
	{
		_putchar(str[j]);
		j++;
	}
}
