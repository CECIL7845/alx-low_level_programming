#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns
 *  the node at a certain index in a listint_t list
 * @head: the first node in the linked list
 * @index: the index of the node to return
 *
 * Return: a pointer to the node we are looking for
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *curr = head;

	while (curr && count < index)
	{
		curr = curr->next;
		count++;
	}

	return (curr ? curr : NULL);
}
