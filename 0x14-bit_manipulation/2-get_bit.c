#include"main.h"

/**
 * get_bit - code module that return  value of bit at given index.
 * @n: numb to check bits
 * @index: index to check bit
 *
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int factor, checker;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	factor = 1 << index;
	checker = n & factor;
	if (checker == factor)
		return (1);
	return (0);
}

