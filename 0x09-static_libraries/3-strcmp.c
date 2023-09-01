#include "main.h"
/**
 * _strcmp - comparison of  string values
 * @s2: input value
 * @s3: input value
 *
 * Return: s2[i] - s3[i]
 */
int _strcmp(char *s2, char *s3)
{
	int i;


	i = 0;
	while (s2[i] != '\0' && s3[i] != '\0')
	{
		if (s2[i] != s3[i])
		{
			return (s2[i] - s3[i]);
		}
	i++;
	}
	return (0);
}

