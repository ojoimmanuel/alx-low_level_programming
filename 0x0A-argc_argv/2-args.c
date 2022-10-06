#include <stdio.h>

/**
 * main - prints all of arg passed
 * @argc: number of arguments
 * @argv: array of arg
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
