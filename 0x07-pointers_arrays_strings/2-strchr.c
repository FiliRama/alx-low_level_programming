#include "main.h"
/**
* _strchr - to locate a char in string
* @s: input string
* @c: input character
* Return: first occurence pointer
* or NULL if the character not found
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
