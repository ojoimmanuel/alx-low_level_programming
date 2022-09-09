#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int i;
	for (i=97; i<123; i++)
	{
		if(i != 101 && i != 113)
		{
			putchar(i);
		}
    	}
	putchar(10);
	return (0);
}
