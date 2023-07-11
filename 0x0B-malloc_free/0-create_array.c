#include "main.h"
#include <stdlib.h>

/**
 * create_array - create and initialize array
 * @size: input num (size of array)
 * @c: iinput character
 * Return:  array pointer, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *Array;


	if (size == 0)
		return (NULL);

	Array = (char *)malloc(sizeof(char) * size);
	if (Array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		Array[i] = c;

	return (Array);
}
