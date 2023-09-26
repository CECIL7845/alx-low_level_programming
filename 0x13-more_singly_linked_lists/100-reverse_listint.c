#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: a pointer to the first node
 *
 * Return: a pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	listint_t *present = NULL;

	while (*head)
	{
		present = (*head)->present;
		(*head)->present = tmp;
		tmp = *head;
		*head = present;
	}

	*head = tmp;

	return (*head);
}
