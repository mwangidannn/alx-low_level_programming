#include "main.h"
/**
 * _memset - it will fill block of a the  memory with the extact value
 * @s: starts the  address memory to filled
 * @b: preference  value
 * @n:the  num of the bytes to adjust
 *
 * Return: adjust the  array with the new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

