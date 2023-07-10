#include <stdlib.h>
#include <stdio.h>

/**
 * search_word - searchs words in string
 * @s: input string
 * Return: total number of words
 */

int search_word(char *s)
{
	int i, flag, word_found;

	flag = 0;
	word_found = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			flag = 0;
		}
		else if (flag == 0)
		{
			flag = 1;
			word_found++;
		}
	}
	return (word_found);
}


/**
 * strtow - to split string
 * @str: input string
 * Return: string pointer
 */

char **strtow(char *str)
{
	char **strg, *temp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;

	words = search_word(str);
	if (words == 0)
		return (NULL);

	strg = (char **) malloc(sizeof(char *) * (words + 1));
	if (strg == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);

				while (start < end)
				{
					*temp++ = str[start++];
				}
				*temp = '\0';
				strg[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	strg[k] = NULL;
	return (strg);
}
