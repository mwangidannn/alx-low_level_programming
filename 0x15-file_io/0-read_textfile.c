#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read  file text then displays to STDOUT.
 * @filename:  file.text  being read
 * @letters: numb of letters to read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fubb;
	ssize_t fd;
	ssize_t t;
	ssize_t w;


	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	fubb = malloc(sizeof(char) * letters);
	t = read(fd, fubb, letters);
	w = write(STDOUT_FILENO, fubb, t);

	free(fubb);
	close(fd);
	return (w);
}
