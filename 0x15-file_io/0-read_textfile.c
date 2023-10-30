#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile - function that reads a text file and
 * displays it to posix std output
 *
 * @filename: filename (string pointer)
 * @letters: number of letters printed
 * Return: number of letters printed as j
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufff;
	ssize_t fd;
	ssize_t j;
	ssize_t h;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bufff = malloc(sizeof(char) * letters);
	h = read(fd, bufff, letters);
	j = write(STDOUT_FILENO, bufff, h);

	free(bufff);
	close(fd);
	return (j);
}
