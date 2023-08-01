#include <stdio.h>
#include  "lists.h"
/**
 * the  print_listint -will  prints all the elements of a linked list
 * the header lisistint_t to print
 *
 * then Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t to_nodes = 0;
while (h != NULL)
{
printf("%d\n", h->n);
to_nodes++;
h = h->next;
}
return (to_nodes);
}
