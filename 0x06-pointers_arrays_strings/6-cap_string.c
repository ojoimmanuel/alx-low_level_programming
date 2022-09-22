#include "main.h"
#include <stdio.h>

/**
 * *cap_string - capitalize words
 * @str: string
 *
 * Return: result
 */

char *cap_string(char *str)
{
	int symb[14] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
		}
		for (j = 0; j < 14, j++)
		{
			if (str[i] >= 97 && str[i] <= 122 && str[i - 1] == symb[j])
			{
				str[1] = str[i] -32;
			}
		}
	}
	return (str);
}
