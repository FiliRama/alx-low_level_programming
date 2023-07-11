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
	int i, j;
	int **array_2D;

	array_2D = (int **) malloc(height * sizeof(int *));
	if (array_2D == NULL)
	{
		return (NULL);
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array_2D[i] = (int *)malloc(width * sizeof(int));
	}
	if (array_2D[i] == NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(array_2D[i]);
		}
		free(array_2D);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array_2D[i][j] = 0;
		}
	}
	return (array_2D);
}
