#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node,NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;


	new_node = malloc(sizeof(*new_node));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
