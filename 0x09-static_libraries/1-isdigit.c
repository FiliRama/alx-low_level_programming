#include "main.h"

/**
 * _isdigit - is a number between 0 to 9.
 * @c: input integer char
 * Return: 1 if c is (0 to 9), 0 in other case.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
