#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function to perform an action on array elements
 * @array: integer array
 * @size: array size
 * @action: function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (arrray == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
