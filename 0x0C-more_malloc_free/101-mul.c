#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - to multiply two  numbers
 * @argc: arguement count
 * @argv: arguement vector
 * Return: Multiplication of the numbers, exit if not numbers
**/

int main(int argc, char *argv[])
{
	int i = 1, j = 0;
	unsigned long mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
			++j;
		}
	++i;
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
