#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - its duplicate  new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int h, j = 0;

	if (str == NULL)
		return (NULL);
	h = 0;
	while (str[h] != '\0')
		h++;

	aaa = malloc(sizeof(char) * (h + 1));

	if (aaa == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		aaa[j] = str[j];

	return (aaa);
}
