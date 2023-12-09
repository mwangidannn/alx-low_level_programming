#include "lists.h"

/**
 * sum_dlistint - Returns  (n) of a dlistint_t linked list.
 * @head: A pointer to the head of the doubly linked list.
 *
 * Return: The sum of linked list. If the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}

return (sum);
}

