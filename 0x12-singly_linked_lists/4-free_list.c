#include "lists.h"

/**
 * free_list - Function to free a list_t list
 * @head: pointer to list_t head
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);

		head = temp;
	}
}
