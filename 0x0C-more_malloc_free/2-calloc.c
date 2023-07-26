#include "main.h"
#include <stdlib.h>
/**
* _calloc - to allocate memory for an array
* @nmemb: number of array elements
* @size: size of array
* Return: a pointer to the allocated memory, NULL if fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arry;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arry = malloc(nmemb * size);
	if (arry == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		arry[i] = 0;
	return (arry);
}
