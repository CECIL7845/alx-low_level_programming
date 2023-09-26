#include "lists.h"

/**
 * sum_listint - a function that calculates the
 * sum of all the data in a listint_t list
 * @head: the first node in the linked list
 *
 * Return: the resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *curr = head;

	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
