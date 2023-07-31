#include "lists.h"
/**
 * The print_listint - it will display the entire  elements of a linked list
 * the header will  linked list of type listint_t to display
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0
while (h != NULL)
{
printf("%d\n", h->data);
count++;
h = h->next;
}
return count;
}
