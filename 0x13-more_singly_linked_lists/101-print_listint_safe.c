#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - Prints a listint_t linked list safely (handles loops)
 * @head: Pointer to the head node of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *current = head;
while (current != NULL)
{
printf("%d", current->n);
count++;
if (current->next == NULL)
{
printf("\n");
return (count);
}
printf(" -> ");
if (current->next >= current)
{
printf("... (loop detected\n");
exit(98);
}
current = current->next;
}
return (count);
}
