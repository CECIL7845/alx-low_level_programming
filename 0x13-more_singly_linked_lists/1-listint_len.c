#include "lists.h"

/**
 * listint_len - a function that returns the number
 * of elements in a linked lists
 * @h: the linked list of type listint_t
 *
 * Return: a number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t digits = 0;

	while (h != NULL)
	{
		h = h->next;
		digits++;
	}
	return (digits);
}
