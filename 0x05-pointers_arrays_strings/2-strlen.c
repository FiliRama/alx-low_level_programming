#include "main.h"

/**
 * _strlen - calculates string length
 * @s: input string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
