#include "main.h"

/**
 * flip_bit - to flip from one number to another.
 * @n: input number
 * @m: input number to flip n
 * Return: number for flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int X0r = n ^ m, bit = 0;

	while (X0r > 0)
	{
		bit += (X0r & 1);
		X0r >>= 1;
	}

	return (bit);
}

