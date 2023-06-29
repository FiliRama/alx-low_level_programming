#include "main.h"
#include <stdio.h>
/**
 * infinite_add - to adds 2 numbers
 * @n1: num one
 * @n2: numb two
 * @r: buffer to store the result.
 * @size_r: Size of buffer
 * Return: the result pointer.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sizen1 = 0, sizen2 = 0, sum, max, intnum1, intnum2, add = 0;

	while (*(n1 + sizen1) != '\0')
		sizen1++;
	while (*(n2 + sizen2) != '\0')
		sizen2++;
	max = (sizen1 >= sizen2) ? sizen1 : sizen2;
	if (size_r <= max + 1)
		return (0);
	r[max + 1] = '\0';
	sizen1--, sizen2--, size_r--;
	intnum1 = *(n1 + sizen1) - 48, intnum2 = *(n2 + sizen2) - 48;
	while (max >= 0)
	{
		sum = intnum1 + intnum2 + add;
		add = (sum >= 10) ? sum / 10 : 0;
     	if (sum > 0)
		*(r + max) = (sum % 10) + 48;
		else
			*(r + max) = '0';
		if (sizen1 > 0)
			sizen1--, intnum1 = *(n1 + sizen1) - 48;
		else
			intnum1 = 0;
		if (sizen2 > 0)
			sizen2--, intnum2 = *(n2 + sizen2) - 48;
		else
			intnum2 = 0;
		max--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
