#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: the linked list to look for
 *
 * Return: the address of the node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *dull = head;
	listint_t *active = head;

	if (!head)
		return (NULL);

	while (dull && active && active->next)
	{
		active = active->next->next;
		dull = dull->next;
		if (active == dull)
		{
			dull = head;
			while (dull != active)
			{
				dull = dull->next;
				active = active->next;
			}
			return (active);
		}
	}

	return (NULL);
}
