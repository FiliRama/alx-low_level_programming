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
	int **array_2d;
	int i, j;

	array_2d = (int **) malloc(height * sizeof(int *));
	if (array_2d == NULL)
		return (NULL);
	if (width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
		array_2d[i] = (int *)malloc(width * sizeof(int));
	if (array_2d[i] == NULL)
	{
		for (i = 0; i < height; i++)
			free(array_2d[i]);
		free(array_2d);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array_2d[i][j] = 0;
	}
	return (array_2d);
}
