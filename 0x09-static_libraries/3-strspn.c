#include "main.h"

/**
* _strspn - to get length of prefix substring
* @s: input String
* @accept: input Substring
* Return: Length
*/
unsigned int _strspn(char *s, char *accept)
{
	int num_of_bytes = 0;
	char *temp = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				num_of_bytes++;
				break;
			}
		if (!(*--accept))
			break;
		accept = temp;
	}
	return (num_of_bytes);
}
