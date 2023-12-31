#include "main.h"

/**
 * _strcat - to concatenate 2 strings
 * @dest: string
 * @src: string
 * Return: a concatenated string pointer
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
