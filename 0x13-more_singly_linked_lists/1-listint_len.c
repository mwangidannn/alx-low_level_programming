#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns all  elements in a linked lists
 * @h: linked list of type listint_t across
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t num_nodes = 0;
while (h)
{
num_nodes++;
h = h->next;
}
return (num_nodes);
}
