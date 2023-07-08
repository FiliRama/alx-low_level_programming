#include <stdio.h>
#include "main.h"

/**
 * main - to print name of program
 * @argc: number of argument (argument count)
 * @argv: array of arguments (argument vector)
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argc;
printf("%s\n", argv[0]);
return (0);
}
