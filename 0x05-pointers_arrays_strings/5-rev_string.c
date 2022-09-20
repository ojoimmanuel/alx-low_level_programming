#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: string
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int i, mid, high;
	char first, last;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	high = i--;
	mid = high / 2;
	while (mid >= 0)
	{
		first = s[high - mid];
		last = s[mid];
		s[mid] = first;
		s[max - half] = last;
		mid--;
	}
}
