#include "main.h"


/**
 * read_textfile- to read the text file
 * @filename: text file
 * @letters: Number of letters
 * Return: Number of bytes read else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	char *buf;

	ssize_t fd;

	ssize_t wr;

	ssize_t r;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	r = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, r);

	free(buffer);

	close(fd);

	return (wr);

}
