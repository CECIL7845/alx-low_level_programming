#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new
 * node at a given position.
 * @head: a pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to put in the new node
 *
 * Return: a pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *new;
	listint_t *curr = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (count = 0; curr && count < idx; count++)
	{
		if (count == idx - 1)
		{
			new->next = curr->next;
			curr->next = new;
			return (new);
		}
		else
			curr = curr->next;
	}

	return (NULL);
}
