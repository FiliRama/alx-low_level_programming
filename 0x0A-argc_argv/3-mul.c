#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - to print number of arguments passed
 * @argc: number of argument (argument count)
 * @argv: array of arguments (argument vector)
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc == 3)
	{
		num1= atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 *num2);
		return (0);
	}
	printf("Error\n");
	return (1);
}
