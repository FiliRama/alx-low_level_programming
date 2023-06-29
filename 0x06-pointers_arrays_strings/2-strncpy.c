#include "main.h"
/**
 * _strncpy - copy one string to another
 * @dest: string to put the copy of src
 * @src: string to be copied
 * @n: limit (size) of src
 * Return: copied string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[k] = src[k];
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}
