#include "main.h"

/**
 * string_length - to return the length of a string
 * @str: string to calculate the length of
 * Return: length of the string
 */
int string_length(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + string_length(str + 1));
}

/**
 * check_pal - to check for palindrome
 * @s: palindrome string
 * @i: iteration
 * @len: string length
 * Return: 1 for palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, string_length(s)));
}
