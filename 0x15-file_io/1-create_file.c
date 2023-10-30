#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


/**
 * create_file - Creates/make a file.
 * @filename: the name of the file to create.
 * @text_content: a string to write to the file.
 *
 * Return: function fails - -1.
 *         Otherwise 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, h, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	h = write(fd, text_content, leng);

	if (fd == -1 || h == -1)
		return (-1);

	close(fd);

	return (1);
}
