#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the datat inside the elements that was deleted
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *chioma;
	int digit;

	if (!head || !*head)

		return (0);
	digit = (*head)->n;
	chioma = (*head)->next;
	free(*head);
	*head = chioma;
	return (digit);
}
