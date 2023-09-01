#include "main.h"
/**
 * _strncpy - copy strings
 * @desti: input value
 * @sour: input value
 * @n: input value
 *
 * Return: desti
 */
char *_strncpy(char *desti, char *sour, int n)
{
	int j;


	j = 0;
	while (j < n && sour[j] != '\0')
	{
		desti[j] = sour[j];
		j++;
	}
	while (j < n)
	{
		desti[j] = '\0';
		j++;
	}


	return (desti);
}
