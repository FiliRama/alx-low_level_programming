#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that perfroms simple operations
 * @argc: argument counter
 * @argv: arguement vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num_1, num_2;
	char operator;
	int (*calculate)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[3]);

	calculate = get_op_func(argv[2]);

	if (!calculate)
	{
		printf("Error\n");
		exit(99);
	}

	operator = *argv[2];

	if ((operator == '/' || operator == '%') && num_2 == 0)
	{
		printf("Error\n");
		exit(100);
	}


	printf("%d\n", calculate(num_1, num_2));

	return (0);
}
