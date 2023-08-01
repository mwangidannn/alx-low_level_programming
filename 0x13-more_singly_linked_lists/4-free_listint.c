#include "lists.h"
/**
 * free_listint - frees linked list
 * @head: listint_t list to be free
 */
void free_listint(listint_t *head)
{
while (head != NULL)
{
listint_t *temp = head;
head = head->next;
free(temp);
}
}
