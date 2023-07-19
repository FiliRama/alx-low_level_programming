#include <stdio.h>
#include <stdlib.h>

/**
 * main - to print its own opcodes
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int byte_size, i = 0;
	char *op_code = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte_size = atoi(argv[1]);

	if (byte_size < 0)
	{
		printf("Error\n");
		exit(2);
	}


	while (i < byte_size)
	{
		if (i == byte_size - 1)
		{
			printf("%02hhx\n", op_code[i]);
			break;
		}
		printf("%02hhx ", op_code[i]);
		i++;
	}
	return (0);
}
