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
	for (; *s != '\0'; s++)
		if (*s == c)
			return (s);
	return (0);
}
