#include "main.h"
/**
* _strpbrk - to search string for any set of bytes
* @s: string to search
* @accept: set of bytes
* Return: pointer to the byte,
* or Null if not found
*/
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j]; j++)
			if (*s == accept[j])
				return (s);
		s++;
	}
	return (0);
}
