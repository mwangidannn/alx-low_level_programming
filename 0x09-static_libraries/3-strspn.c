#include "main.h"
/**
 * _strspn -the  Entry point
 * @h: input value
 * @acceptance: input value
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *h, char *acceptance)
{
	unsigned int n = 0;
	int r;


	while (*h)
	{
		for (r = 0; acceptance[r]; r++)
		{
			if (*h == acceptance[r])
			{
				n++;
				break;
			}
			else if (acceptance[r + 1] == '\0')
				return (n);
		}
		h++;
	}
	return (n);
}

