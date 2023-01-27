#include <string.h>
#include "lists.h"

/**
 * add_node_end - Function to add new node at end of list_t
 * @head: Pointer to pointer to head of linked list_t
 * @str: String to add to new node
 * Return: pointer to new node if successful, else NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
