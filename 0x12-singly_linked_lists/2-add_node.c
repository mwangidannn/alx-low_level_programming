#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - addation of  new node at starts of the  linked list
 * @head: double pointers to  list_t list
 * @str: the new string to add in  node
 *
 * Return: address of  new elemts, or NULL if fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

