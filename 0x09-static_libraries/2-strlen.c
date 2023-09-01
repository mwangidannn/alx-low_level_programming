#include "main.h"
/**
 * _strlen - returns length measure of string
 * @s:the string
 * Return: length measure
 */
int _strlen(char *s)
{
	int longi = 0;


	while (*s != '\0')
	{
		longi++;
		s++;
	}


	return (longi);
}

