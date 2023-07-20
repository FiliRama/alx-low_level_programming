#include "variadic_functions.h"

/**
 * sum_them_all - to calculate the sum of args
 * @n: number of args
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list input_args;

	va_start(input_args, n);

	for (i = 0; i < n; i++)
	sum += va_arg(input_args, int);

	va_end(input_args);

	return (sum);
}

