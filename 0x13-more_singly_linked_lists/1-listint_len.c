#include "list.h"
/**
 *functn listint_len return entire number of elements in a linked lists
 * head  linked list of type listint_t to traverse
 *
 * will  Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t numb = 0;
while (head != NULL)
{
numb++;
h = h->next;
}
return (numb);
}
