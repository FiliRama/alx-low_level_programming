#include "main.h"

/**
 * _strncat - to concatenate 2 strings
 * @dest: string
 * @src: string
 * @n: limit (size) of src
 * Return: a concatenated string pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
		i++;
       for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
