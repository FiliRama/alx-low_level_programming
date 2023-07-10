#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to the copy of the string
 * @str: input string
 * Return:  NULL if insufficient memory, else returns a pointer
 */
char *_strdup(char *str)
{
	char *duplicate;
	int j, length;

	if (str == NULL)
		return (NULL);

	for (length =0; str[length] != '\0'; length++);

	duplicate = (char *)malloc((sizeof(char) * length) + 1);
	if (duplicate == NULL)
		return (NULL);

	for (j = 0; j < length; j++)
		duplicate[j] = str[j];
	duplicate[length] = '\0';

	return (duplicate);
}
