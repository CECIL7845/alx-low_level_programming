#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: a pointer to the first element
 *
 * Return: data inside the elements that was deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *curr;
	int digits;

	if (!head || !*head)
		return (0);

	digits = (*head)->n;
	curr = (*head)->next;
	free(*head);
	*head = curr;

	return (digits);
}
