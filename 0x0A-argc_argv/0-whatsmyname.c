#include <stdio.h>
#include "main.h"

/**
 * main - to print name of program
 * @argc: number of argument (argument count)
 * @argv: array of arguments (argument vector)
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
