#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - to print every element of an array
 * @array: input array
 * @size: array size
 * @action: pointer function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
