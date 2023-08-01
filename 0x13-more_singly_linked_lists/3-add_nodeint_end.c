#include "lists.h"

/**
 *add_nodeint_end - will adds a node_ end of linked list
 * @head: will points to the first element linked list
 * @n: will be data to insert in the new element
 *
 * Return: pointer to the new node, or NULL for error mngmts
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
listint_t *current_node = *head;
while (current_node->next != NULL)
{
current_node = current_node->next;
}
current_node->next = new_node;
}
return (new_node);
}
