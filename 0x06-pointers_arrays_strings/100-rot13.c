#include "main.h"

/**
 * rot13 - Encryptes the string by rot13
 * @s: input string
 * Return: cipher string
 */
char *rot13(char *s)
{
	int i, j;

	char Aa[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char Nn[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 52; j++)
			if (s[i] == Aa[j])
			{
				s[i] = Nn[j];
				break;
			}
	return (s);
}
