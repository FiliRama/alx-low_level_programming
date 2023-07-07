#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - to print minimum number of coins
 * @argc: number of argument (argument count)
 * @argv: array of arguments (argument vector)
 * Return:  0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int i, cents, num_of_coins;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	num_of_coins = 0;

	for (i = 0; i < 5 && cents >= 0; i++)
		while (cents >= coins[j])
		{
			num_of_coins++;
			cents -= coins[j];
		}

	printf("%d\n", num_of_coins);
	return (0);
}
