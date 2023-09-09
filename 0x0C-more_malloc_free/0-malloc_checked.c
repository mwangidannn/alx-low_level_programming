#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - Its used to allocates memory using malloc
 * @g:This is  num of bytes to allocate
 *
 * Returns: pointer to  allocated memory
 */
void *malloc_checked(unsigned int g)
{
	void *ptr;

	ptr = malloc(g);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

