#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *goat, *lamb;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	goat = head->next;
	lamb = (head->next)->next;

	while (lamb != NULL && lamb->next != NULL)
	{
		if (goat == lamb)
		{
			goat = head;
			while (goat != lamb)
			{
				nodes++;
				goat = goat->next;
				lamb = lamb->next;
			}

			goat = goat->next;
			while (goat != lamb)
			{
				nodes++;
				goat = goat->next;
			}

			return (nodes);
		}

		goat = goat->next;
		lamb = lamb->next->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0, i = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			i++;
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

	return (i);
}
