#include "variadic_functions.h"

/**
 * print_numbers - to print args
 * @separator: char between numbers
 * @n: number of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list input_args;
unsigned int i;
va_start(input_args, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(input_args, int));
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(input_args);
}
