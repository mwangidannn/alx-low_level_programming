#include "main.h"

/**
 * flip_bits - counts numb of bits to adjust
 * to get from one numb to another numb
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, counterbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			counterbit++;
	}

	return (counterbit);
}

