#include "main.h"

/**
 * set_bit - code instructions that set value of bit to 1 at a given index.
 * @n: numb to set
 * @index: index at which to set bit
 *
 * Return: 1 if success, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setvalbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setvalbit = 1 << index;
	*n = *n | setvalbit;
	return (1);
}

