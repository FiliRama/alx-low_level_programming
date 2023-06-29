#include "main.h"
#include <stdio.h>

/**
 * print_buffer - to print the buffer
 * @b: buffer pointer
 * @size: size of the array
 */

void print_buffer(char *b, int size)
{
	int  j, i, output;

	if (size <= 0)
		printf("\n");
	else
	for (output = 0; output < size; output += 10)
	{
		if (size - output < 10)
			j = size - output;
		else
			j = 10;
		printf("%08x: ", output);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + output + i));
			else
				printf("  ");
			if (i % 2)
				printf(" ");
		}
		for (i = 0; i < j; i++)
		{
			int character = *(b + output + i);

			if (character < 32 || character > 132)
				character = '.';
			printf("%c", character);
		}
		printf("\n");
	}
}
