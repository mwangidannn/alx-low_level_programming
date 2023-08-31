#include "main.h"
/**
 * _strlen_recursion-will Returns the length the strings.
 * @s: strings to  be measured.
 *
 * Return: returns the  length  of the  string.
 */
int _strlen_recursion(char *s)
{
	int longlenit = 0;

	if (*s)
	{
		longlenit++;
		longlenit += _strlen_recursion(s + 1);
	}

	return (longlenit);
}

