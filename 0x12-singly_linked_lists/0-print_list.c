#include "lists.h"

/**
 * print_list - fxn to print all elements of a list_t list
 * @h: head of a linked list
 *
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (size);
}
