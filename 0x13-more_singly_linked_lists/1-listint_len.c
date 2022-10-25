#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: head of the linked list
 *
 * Return: num of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
