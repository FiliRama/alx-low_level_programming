#include "main.h"
/**
 * _strcmp - to compare two strings
 * @s1: string pointer one
 * @s2: string pointer two
 * Return: +ve, -ve || 0
*/

int _strcmp(char *s1, char *s2)
{
	int j;
	for (j = 0; s1[j] != '\0' || s2[j] != '\0'; j++)
		if (s2[j] != s1[j])
			return (s1[j] - s2[j]);
	return (0);
}
