#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int i;
	for (i=48; i<58; i++)
	{
		putchar(i);
		if(i<57)
		{
			putchar(44);
			putchar(32);
		}
    	}
	putchar(10);
	return (0);
}
