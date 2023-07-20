#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - prints anything with format %c%s%d%f
 * @format: list of data types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list input_args;
	int i = 0;
	char *s, *separator = "";

	va_start(input_args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 's':
					s = va_arg(input_args, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", separator, s);
					break;
				case 'i':
					printf("%s%d", separator, va_arg(input_args, int));
					break;
				case 'c':
					printf("%s%c", separator, va_arg(input_args, int));
					break;

				case 'f':
					printf("%s%f", separator, va_arg(input_args, double));
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(input_args);
}
