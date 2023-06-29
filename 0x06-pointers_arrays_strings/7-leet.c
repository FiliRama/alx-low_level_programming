#include "main.h"

/**
 * leet - encrypt specfic letters
 * @s: input string pointer
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int i, j;

	char *letter = "aAeEoOtTlL";
	char *code = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 10; j++)
			if (s[i] == letter[j])
				s[i] = code[j];
	return (s);
}
