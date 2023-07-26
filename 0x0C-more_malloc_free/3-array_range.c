#include "main.h"
#include <stdlib.h>
/**
* array_of_intay_range - to create an array_of_intay of integers
* @min: input minimum num
* @max: input maximum num
* Return: pointer to array_of_intay of integers
*/
int *array_range(int min, int max)
{
	int *array_of_int;
	int i, range;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	array_of_int = malloc(range * sizeof(int));
	if (array_of_int == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		array_of_int[i] = min++;
	return (array_of_int);
}
