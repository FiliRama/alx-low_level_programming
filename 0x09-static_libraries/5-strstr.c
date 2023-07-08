#include "main.h"

/**
* _strstr - to locates substring
* @haystack: total input string
* @needle: string to be search
* Return: pointer beginning of substring
* or NULL if not found
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *Haystack = haystack;
		char *Needle = needle;

		for (; *Haystack == *Needle && *Needle != '\0'; Haystack++)
			Needle++;

		if (*Needle == '\0')
			return (haystack);
	}

	return (0);
}
