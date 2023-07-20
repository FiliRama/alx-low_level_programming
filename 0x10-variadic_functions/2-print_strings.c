#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - to print strings
 * @separator: char between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list input_args;

	va_start(input_args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(input_args, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	printf("\n");

	va_end(input_args);
}
