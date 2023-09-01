#include "main.h"
/**
 *_memcpy - a function to  copies memory area
 *@desti: mem  is stored
 *@sour: mem  is copied
 *@n: num of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *desti, char *sour, unsigned int n)
{
	int r = 0;
	int i = n;


	for (; r < i; r++)
	{
		desti[r] = sour[r];
		n--;
	}
	return (desti);
}
