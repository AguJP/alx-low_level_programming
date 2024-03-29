#include "lists.h"

/**
 * add_nodeint_end - Function to add a new node at end of listint_t list
 * @head: head of list
 * @n: content of new node
 * Return: pointer to new element if successful, else NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	temp = *head;
	new->n = n;
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
