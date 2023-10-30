#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


/**
 * append_text_to_file - Appends/adjusts  text at end of a file.
 * @filename: name of the file.
 * @text_content: The strg  to add to end of the file.
 *
 * Return: If funct fails or filename is NULL - -1.
 *         If file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, f, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	f = write(i, text_content, leng);

	if (i == -1 || f == -1)
		return (-1);

	close(i);

	return (1);
}
