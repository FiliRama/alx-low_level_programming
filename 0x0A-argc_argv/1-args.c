#include <stdio.h>
#include "main.h"

/**
 * main - to print number of arguments passed
 * @argc: number of argument (argument count)
 * @argv: array of arguments (argument vector)
 * Return: Always 0 (Success)
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
