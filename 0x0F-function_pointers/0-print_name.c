#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - outputs name by using a pointer function
 * @name:the string to add
 * @f: pointer function
 * Return: null
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

