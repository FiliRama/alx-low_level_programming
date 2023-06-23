#include "main.h"

/**
 * print_diagonal - prints n diagonal line 
 * @n: number diagonal lines printed.
 * Return: no return.
 */
void print_diagonal(int n)
{
	int i, k;

	for (i = 0; i < n; i++)
	{
		for (k = 0; k < i; k++)
			_putchar(' ');
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
