#include "main.h"

/**
 * *_memset - to fill memory with constant byte
 * @s: memory area
 * @b: input char
 * @n: input number
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;
	return (s);
}
