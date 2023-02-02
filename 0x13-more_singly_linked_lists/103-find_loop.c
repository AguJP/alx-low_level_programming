#include "lists.h"

/**
 * finc_listint_loop - Function to find the loop in a linked list
 * @head: pointer to head of list
 * Return: pointer to node at start of loop, else NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow-next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			return (fast);
		}
	}

	return (NULL);
}
