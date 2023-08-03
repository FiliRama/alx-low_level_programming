#include "main.h"

/**
 * binary_to_unsigned_intnt - to convert binary to unsigned int
 * @b: binary number
 *
 * Return: unsigned int.
 */
unsigned int binary_to_unsigned_intnt(const char *b)
{
	unsigned int unsigned_int;
	int length, b2;

	if (!b)
		return (0);

	unsigned_int = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, b2 = 1; length >= 0; length--, b2 *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			unsigned_int += b2;
		}
	}

	return (unsigned_int);
}
