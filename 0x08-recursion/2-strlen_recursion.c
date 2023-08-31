#include "main.h"
/**
 *This  _strlen_recursion-will go ahead to  Returns the length in measure of the strings.
 * @s: This is the  strings that will be  be measured.
 *
 * Return: Will returns the  length measure of the  string.
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

