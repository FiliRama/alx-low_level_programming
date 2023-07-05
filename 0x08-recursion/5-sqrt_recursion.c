#include "main.h"


/**
 * square_root_recursion -to find square root of a number
 * @num: input number
 * @i: for iteration
 * Return: square root
 */
int square_root_recursion(int i, int num)
{
	if (i * i > num)
		return (-1);
	if (i * i == num)
		return (i);
	return (square_root_recursion(++i,num));
}

/**
 * _square_root_recursion - to getsquare root of n
 * @n:input number
 *
 * Return: result of square root
 */
int _square_root_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_root_recursion(0, n));
}
