#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: head of the linked list.
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *update;

	while ((update = head) != NULL)
	{
		head = head->next;
		free(update->str);
		free(update);
	}
}
