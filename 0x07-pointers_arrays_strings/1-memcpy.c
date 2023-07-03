#include "main.h"

/**
 * *_memcpy - to copy from memory
 * @dest: destination
 * @src: memory area to br copied
 * @n: number of bytes
 * Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;
	for (j = 0; j < n; j++)
		dest[j] = src[j];
	return (dest);
}
