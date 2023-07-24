#include "main.h"
#include <stdlib.h>

/**
 * _realloc - to reallocate memory
 * @ptr: pointer to previously allocated memory
 * @old_size: size in bytes
 * @new_size: new size in bytes
 * Return: pointer to the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int k;
	char *reallocate;


	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		reallocate = malloc(new_size);
		if (reallocate == NULL)
			return (NULL);
		return (reallocate);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (reallocate == NULL)
		return (NULL);

	for (k < new_size && k < old_size)
	{
		reallocate[k] = ((char *)ptr)[k];
		k++;
	}

	free(ptr);

	return (reallocate);
}
