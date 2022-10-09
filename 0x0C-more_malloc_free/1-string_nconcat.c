#include "main.h"
#include <stdlib.h>

/**
 * _strlen - get string length
 * @string: given string
 *
 * Return: length
 */

int _strlen(char *string)
{
	int len;

	len = 0;
	while (string[len] != '\0')
	{
		len++;
	}
	
	return (len);
}
