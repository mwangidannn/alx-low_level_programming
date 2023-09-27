#include "lists.h"

/**
 * sum_listint - calculates sum of all data in listint_t list
 * @head: first node in  linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sumasion = 0;
	listint_t *temp = head;

	while (temp)
	{
		sumasion += temp->n;
		temp = temp->next;
	}

	return (sumasion);
}

