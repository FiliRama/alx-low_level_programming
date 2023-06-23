#include <stdio.h>

/**
 * main - to print prime factor.
 * Return: Always 0
 */

int main(void)
{
	long long int number, i;

	number = 612852475143;
	for (i = 2; i <= number; i++)
		if (number % i == 0)
		{
			number /= i;
			i--;
		}
	printf("%lli\n", i);
	return (0);
}
