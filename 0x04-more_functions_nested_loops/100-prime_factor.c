#include <stdio.h>

/**
 * main - to print prime factor.
 * Return: Always 0
 */

int main(void)
{
	unsigned long int number, i;

	number = 612852475143;
	for (i = 2; i <= number; i++)
		if (number % i == 0)
		{
			number /= i;
			i--;
		}
	printf("%lu\n", i);
	return (0);
}
