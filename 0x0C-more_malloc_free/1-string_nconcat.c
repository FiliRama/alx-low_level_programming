#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - to concatenate two string
* @s1: input string 1
* @s2: input string 2
* @n: number of bytes
* Return: pointer to the concatnated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_sum;
	unsigned int i, j, k = 0, l;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	str_sum = malloc((i + j + 1) * sizeof(char));
	if (str_sum == NULL)
		return (NULL);

	for (l = 0; l < i; l++)
		str_sum[l] = s1[l];
	while (n < j && l < (i + n))
		str_sum[l++] = s2[k++];
	while (n >= j && i < (j + i))
		str_sum[l++] = s2[k++];
	str_sum[l] = '\0';
	return (str_sum);
}
