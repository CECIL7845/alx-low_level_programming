#include "lists.h"

/**
 * add_nodeint - a function that adds a new node
 * at the beginning of a linked list
 * @head: a pointer to the first node
 * @n: data to put in the new node
 *
 * Return: a pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
