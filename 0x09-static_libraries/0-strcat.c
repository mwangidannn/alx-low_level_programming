#include "main.h"
 /**
 * _strcat - concatenates two strings
 * @deta:value
 * @sour:value
 * Return:void
 */
char *_strcat(char *deta, char *sour)
{
	int i;
	int j;


	i = 0;
	while (deta[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (sour[j] != '\0')
	{
		deta[i] = sour[j];
		i++;
		j++;
	}
	deta[i] = '\0';
	return (deta);
}
