#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of the size,the its  assign char c
 * @size: size of array
 * @c: char get
 * Description: set up  array of size ,assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int h;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (h = 0; h < size; h++)
		str[h] = c;
	return (str);
}
