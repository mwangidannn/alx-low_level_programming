#include "lists.h"
/**
 * pop_listint - deletes the first node of  list
 * @head: points to the first element in the linked list
 * Return: data inside elements that was deleted
 * 0 when list was  empty
 */
int pop_listint(listint_t **head)
{
listint_t *few;
int count;
if (!head || !*head)
return (0);
count = (*head)->n;
few = (*head)->next;
free(*head);
*head = few;
return (count);
}

