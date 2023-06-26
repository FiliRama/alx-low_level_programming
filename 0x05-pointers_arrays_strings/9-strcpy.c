#include "main.h"
/**
 * _strcpy - copy the string from src to dest
 * @dest: Destination recieve  a string from src
 * @src: string to be copied
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l;

	for (l = 0; src[l] != '\0'; l++)
		dest[l] = src[l];
	dest[l] = '\0';
	return (dest);
}
