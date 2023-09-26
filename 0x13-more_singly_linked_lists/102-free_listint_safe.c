#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list
 * @h: a pointer to the first node
 *
 * Return: the number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int d;
	listint_t *curr;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			curr = (*h)->next;
			free(*h);
			*h = curr;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}

	*h = NULL;

	return (l);
}
