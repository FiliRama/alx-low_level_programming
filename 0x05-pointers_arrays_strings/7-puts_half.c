#include "main.h"
/**
 * puts_half - prints second 1/2 of a string
 * @str: input string
 */
void puts_half(char *str)
{
	int length = 0, second_half;

	while (str[length] != '\0')
		length++;
	if (length + 1 % 2 != '0')
		second_half = (length - 1) / 2;
	else
		second_half = (length / 2);
	second_half++;

	for (length = second_half; str[length] != '\0'; length++)
	_putchar(str[length]);
	_putchar('\n');
}
