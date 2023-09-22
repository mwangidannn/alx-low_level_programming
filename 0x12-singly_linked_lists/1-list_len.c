#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns  num of elemts in the  linked list
 * @h: pointers to list_t list
 *
 * Return: num of elemts in h
 */
size_t list_len(const list_t *h)
{
	size_t p = 0;

	while (h)
	{
		p++;
		h = h->next;
	}
	return (p);
}

