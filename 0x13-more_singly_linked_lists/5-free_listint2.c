#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: pointer to the list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (head == NULL)
		return;

	while (*head)
	{
		curr = (*head)->next;
		free(*head);
		*head = curr;
	}

	*head = NULL;
}
