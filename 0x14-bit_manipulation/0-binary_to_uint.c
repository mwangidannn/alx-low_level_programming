#include "main.h"

/**
 * binary_to_uint - function code  convert binary numb to unsigned integers.
 * @b: pointers to strg hoilding binary numb
 *
 * Return: unsigned integer  with dec vlu of bin num, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int h;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (h = 0; b[h] != '\0'; h++)
	{
		if (b[h] != '0' && b[h] != '1')
			return (0);
	}
	for (h = 0; b[h] != '\0'; h++)
	{
		num <<= 1;
		if (b[h] == '1')
			num += 1;
	}
	return (num);
}

