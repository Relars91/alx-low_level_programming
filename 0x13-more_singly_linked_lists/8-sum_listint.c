#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a list
 * @head: A pointer to the first node of the list
 *
 * Return: The resulting sum
 */
int sum_listint(listint_t *head)
{
	int total_sum = 0;
	listint_t *temp_node = head;

	while (temp_node != NULL)
	{
		total_sum += temp_node->n;
		temp_node = temp_node->next;
	}

	return (total_sum);
}
