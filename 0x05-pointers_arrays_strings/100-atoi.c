#include "main.h"

/**
 * _atoi - to convert  string to int
 * @s: input string
 * Return: int from the string
 */
int _atoi(char *s)
{
	int i, sign, num, len, numfound, digit;

	i = 0;
	sign = 0;
	num = 0;
	len = 0;
	numfound = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && numfound == 0)
	{
		if (s[i] == '-')
			++sign;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (sign % 2)
				digit = -digit;
			num = num * 10 + digit;
			numfound = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			numfound = 0;
		}
		i++;
	}

	if (numfound == 0)
		return (0);

	return (num);

}	
