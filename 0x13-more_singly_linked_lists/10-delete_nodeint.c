#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index of a listint_t linked list.
 * @head: a pointer to the first element
 * @index: the index of the node to delete
 *
 * Return: 1 Success, or -1 Fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head;
	listint_t *present = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(prev);
		return (1);
	}

	while (count < index - 1)
	{
		if (!prev || !(prev->next))
			return (-1);
		prev = prev->next;
		count++;
	}


	present = prev->next;
	prev->next = present->next;
	free(present);

	return (1);
}
