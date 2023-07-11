#include "main.h"
#include <stdlib.h>
/**
* str_concat - to concatenate two strings
* @s1: input string 1
* @s2: input string 2
* Return: Concatnated string, or NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *str_sum;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	str_sum = (char *)malloc((i + j + 1) * sizeof(char));

	if (str_sum == NULL)
		return (NULL);
	i = 0;
	j = i;
	while (s1[i] != '\0')
	{
		str_sum[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str_sum[i] = s2[j];
		i++;
		j++;
	}
	str_sum[i] = '\0';
	return (str_sum);
}
