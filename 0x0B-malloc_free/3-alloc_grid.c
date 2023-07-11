#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - returns 2 dimesional array of integers
* @width: input width
* @height: input height
* Return: a pointer to a 2 dimensional array
*/
int **alloc_grid(int width, int height)
{
	int **array_2D;
	int j, k;

	if (width <= 0 || height <= 0)
	return (NULL);
	array_2D = malloc(sizeof(int *) * height);
	if (array_2D == NULL)
	return (NULL);
	for (j = 0; j < height; j++)
	{
		array_2D[j] = malloc(sizeof(int) * width);
		if (array_2D[j] == NULL)
		{
			for (; j >= 0; j--)
				free(array_2D[j]);
			free(array_2D);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
	for (k = 0; k < width; k++)
		array_2D[j][k] = 0;
	}
	return (array_2D);
}
