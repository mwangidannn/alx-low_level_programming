#include "main.h"
/**
 * _print_rev_recursion -This will go on to  Prints a string in reverse.
 * @s: This is the  strings that will be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

