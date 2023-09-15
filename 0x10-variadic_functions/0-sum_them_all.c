#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -This returns the sum of all paramters associated with it
 * @n: numb of the paramters elements which are  passed to function.
 * @...: A var numb of paras elements  to calculates  sum  of
 *
 * Returns: If n == 0 - 0.
 *         Otherwise - the sum of all elements paras
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int h, sum = 0;

	va_start(ap, n);

	for (h = 0; h < n; h++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

