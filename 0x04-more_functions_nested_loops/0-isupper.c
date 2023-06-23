#include "main.h"

/**
 * _isupper - Checks for uppercase char
 * @c: The char 2 b checked.
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
