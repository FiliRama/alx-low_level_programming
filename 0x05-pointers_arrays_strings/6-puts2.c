#include "main.h"
/**
 * puts2 - prints strings in even place
 * @str: input string
 */

void puts2(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
	if (length % 2 == 0)
		_putchar(str[length]);
	_putchar('\n');
}
