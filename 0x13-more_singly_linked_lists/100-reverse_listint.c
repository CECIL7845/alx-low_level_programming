#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: a pointer to the first node
 *
 * Return: a pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = next;
	}

	*head = pre;

	return (*head);
}
