#include "lists.h"
/**
 * pop_listint to deletes the head node of a linked list
 * @h points to the first element in the linked list
 *
 * Return: data inside elements that was deleted
 * 0 when thee list is empty
 */
int pop_listint(listint_t **head);
{
if (head == NULL || *head == NULL)
{
return (0);
}
int data = (*head)->n;
listint_t *temp = *head;
*head = (*head)->next;
free(temp);
return (data);
}
void print_list(listint_t **head);
{
listint_t *current_node = head;
while (current_node != NULL)
{
printf("%d -> ", current_node->n);
current_node = current_node->next;
}
printf("NULL\n");
}
