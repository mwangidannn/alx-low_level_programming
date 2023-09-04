#include "main.h"
/**
 * _strchr -input point
 * @h: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *h, char c)
{
	int i = 0;


	for (; h[i] >= '\0'; i++)
	{
		if (h[i] == c)
			return (&h[i]);
	}
	return (0);
}
