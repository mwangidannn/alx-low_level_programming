#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;
while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
slow = head;
while (slow != fast)
{
slow = slow->next;

fast = fast->next;
{
return (slow);
}
}
return (NULL);
}
void create_loop(listint_t *head, int loop_index)
{
listint_t *loop_start = head;

while (loop_index > 0)

{
loop_start = loop_start->next
loop_index--;
}
listint_t *current_node = head;
while (current_node->next != NULL)
{
current_node = current_node->next;
}
current_node->next = loop_start
}
void print_list(listint_t *head);
{
listint_t *current_node = head;
int count = 0;
while (current_node != NULL && count < 15)
{
printf("%d -> ", current_node->n);
current_node = current_node->next;
count++;
}
if (current_node != NULL)
{
printf("... (loop detected)\n");
}
else
{
printf("NULL\n");
}
}
}
