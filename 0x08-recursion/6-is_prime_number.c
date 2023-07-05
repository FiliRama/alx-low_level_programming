#include "main.h"

/**
 * is_prime - checks whether it is prime number or not
 * @num: number to evaluate
 * @j: for iteration
 * Return: 1 if n is prime, 0 if not
 */
int is_prime(int j, int num)
{
	if (j == 1)
		return (1);
	if (num % j == 0 && j > 0)
		return (0);
	return (is_prime(--j, num));
}

/**
 * is_prime_number - checks whether it is prime number or not
 * @n: inpu tnumber
 * Return: 1 if prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n - 1, n));
}
