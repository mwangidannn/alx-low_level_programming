#include "lists.h"

/**
 * pop_listint - deletes  head node of linked list
 * @head: pointer to first elemt in  linked list
 *
 * Return:data inside  elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int numbr;

	if (!head || !*head)
		return (0);

	numbr = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (numbr);
}

