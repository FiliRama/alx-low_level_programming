#include "main.h"

/**
 * cap_string - to capitalize the String
 * @s: input string 
 * Return: Uppercase string pointer
 */
char *cap_string(char *s)
{
	int i, j;

	char *separator = " \t\n,;.!?(){}\"";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (i == 0 && *(s + i) <= 'z' && *(s + i) >= 'a')
			s[i] -= 32;

		for (j = 0; j < 13; j++)
			if (s[i] == separator[j])
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
	}

	return (s);
}
