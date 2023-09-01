#include "main.h"
/**
 * _strncat - joints two strings together
 * using at most n bytes from sour
 * @desti: input value
 * @sour: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *desti, char *sour, int n)
{
	int i;
	int j;


	i = 0;
	while (desti[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && sour[j] != '\0')
	{
	desti[i] = sour[j];
	i++;
	j++;
	}
	desti[i] = '\0';
	return (desti);
}

