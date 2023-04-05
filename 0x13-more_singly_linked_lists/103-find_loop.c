#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *goat, *lamb;

	if (head == NULL || head->next == NULL)
		return (NULL);

	goat = head->next;
	lamb = (head->next)->next;

	while (lamb)

	{

		if (goat == lamb)

		{

			goat = head;

			while (goat != lamb)

			{

				goat = goat->next;
				lamb = lamb->next;
			}

			return (goat);
		}

		goat = goat->next;
		lamb = (lamb->next)->next;
	}

	return (NULL);
}
