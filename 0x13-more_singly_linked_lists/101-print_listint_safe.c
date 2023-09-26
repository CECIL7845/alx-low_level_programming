#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - a function that counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: pointer to the head of the list to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *snail, *antelope;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	snail = head->next;
	antelope = (head->next)->next;

	while (antelope)
	{
		if (snail == antelope)
		{
			snail = head;
			while (snail != antelope)
			{
				nodes++;
				snail = snail->next;
				antelope = antelope->next;
			}

			snail = snail->next;
			while (snail != antelope)
			{
				nodes++;
				snail = snail->next;
			}

			return (nodes);
		}

		snail = snail->next;
		antelope = (antelope->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - a function that prints a listint_t list safely.
 * @head: A pointer to the head of the list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
