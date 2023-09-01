#include "main.h"
/**
 * _isupper - uppercase letters
 * @c: character  to be  checked
 *
 * Return: 0,1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
