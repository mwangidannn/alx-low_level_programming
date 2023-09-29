#include "main.h"

/**
 * _pow - module code that finds (base ^ power)
 * @base:This is the base of exponent
 * @power: power of the exponent
 * Return:The value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int p;

	num = 1;
	for (p = 1; p <= power; p++)
		num *= base;
	return (num);
}

/**
 * print_binary - displays numb in bin notation
 * @n: numb to output
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int factor, checker;
	char flags;

	flags = 0;
	factor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (factor != 0)
	{
		checker = n & factor;
		if (checker == factor)
		{
			flags = 1;
			_putchar('1');
		}
		else if (flags == 1 || factor == 1)
		{
			_putchar('0');
		}
		factor >>= 1;
	}
}

