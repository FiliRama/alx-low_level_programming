#include <stdio.h>
#include "main.h"

/**
 * main - to print number of arguments received
 * @argc: number of argument (argument count)
 * @argv: array of arguments (argument vector)
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
