#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
listint_t *temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}

listint_t *current_node = *head;
unsigned int current_index = 0;
while (current_node->next != NULL && current_index < index - 1)
{
current_node = current_node->next;
current_index++;
}

if (current_node->next == NULL || current_index < index - 1)
{

return (-1);

}

listint_t *node_to_delete =current_node->next;
current_node->next = node_to_delete->next;
free(node_to_delete);
return (1);
}

void print_list(listint_t *head);
{
listint_t *current_node = head;
while (current_node != NULL)
{
printf("%d -> ", current_node->n);
current_node = current_node->next;
}
printf("NULL\n");
}
