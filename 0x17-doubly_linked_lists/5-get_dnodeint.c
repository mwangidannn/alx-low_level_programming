#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node to return (starting from 0).
 *
 * Return: The address of the nth node, or NULL if it does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;

while (head != NULL)
{
if (count == index)
return (head);

head = head->next;
count++;
}

return (NULL);  /* Node at the given index doesn't exist */
}

