#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - outputs @ array element on a new line
 * @array: array
 * @size: how many of the  elements to outputs
 * @action: pointer to outputsin the  regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int h;

	if (array == NULL || action == NULL)
		return;

	for (h = 0; h < size; h++)
	{
		action(array[h]);
	}
}

