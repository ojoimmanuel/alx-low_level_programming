#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (unsigned int) sizeof(char));
	printf("Size of an int: %lu byte(s)\n",  (unsigned int) sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned int) sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (int) sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n",  (unsigned int)sizeof(float));
	return (0);
}
