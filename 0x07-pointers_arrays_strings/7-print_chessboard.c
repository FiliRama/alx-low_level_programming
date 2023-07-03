#include "main.h"
#include <stdio.h>
/**
* print_diagsums - to sum diagonals of a square
* @a: input matrix
* @size: Size of the matrix
*/
void print_diagsums(int *a, int size)
{
	int sum_of_D1, sum_of_D2, i;

	sum_of_D1 = 0;
	sum_of_D2 = sum_of_D1;
	for (i = 0; i < size; i++)
	{
		sum_of_D1 += a[(size * i) + i];
		sum_of_D2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", sum_of_D1, sum_of_D2);
}
