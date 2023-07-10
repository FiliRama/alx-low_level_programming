#include "main.h"
#include <stdlib.h>

/**
 * argstomerge_args - to concatenate  the arguments
 * @ac: input argument count
 * @av: input argument vector
 *
 * Return: string pointer, or NULL if it fails
 */
char *argstomerge_args(int ac, char **av)
{
	char *merge_args, *arg;
	int i, j, k, len = 0;

	if (ac == 0 || av == NULL)
		return (0);

	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		j = 0;

		while (arg[j++])
			len++;
		len++;
	}

	merge_args = (char *)malloc(sizeof(char) * (len + 1));
	if (merge_args == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < len; i++)
	{
		arg = av[i];
		k = 0;

		while (arg[k])
		{
			merge_args[j] = arg[k];
			k++;
			j++;
		}
		merge_args[j++] = '\n';
	}
	merge_args[j] = '\0';

	return (merge_args);
}
