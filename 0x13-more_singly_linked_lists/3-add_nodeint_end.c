#include "lists.h"

/**
 * add_nodeint_end - a function that adds a
 * node at the end of a linked list.
 * @head: a pointer to the first element in the list.
 * @n: Data to put in the new element.
 *
 * Return: a pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	listint_t **last_next = head;

	while (*last_next)
	{
		last_next = &(*last_next)->next;
	}

	*last_next = new_node;

	return (new_node);
}
