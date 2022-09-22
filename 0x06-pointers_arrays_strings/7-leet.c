#include "main.h"

/**
 * *leet - encode string to 1337
 * @s: string
 *
 * Return: result
 */

char *leet(char *)
{
	char *m = "aeotl";
	char *M = "AEOTL";
	int x[] = {'4', '3', '0', '7', '1'};
	int i;
	char *p = s;

	while(*s != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == *(m + i) || *s == *(M + i))
				*s = x[1];
		}
		s++;
	}
       
	return (p);
}
