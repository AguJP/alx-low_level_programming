#include "lists.h"

/**
 * list_len - Function to return the no. of elements in a linked list
 * @h: linked list list_t list
 * Return: Number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
