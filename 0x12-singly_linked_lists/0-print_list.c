#include <stdio.h>
#include "lists.h"

/**
 * prints_list - prints all the element of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t uche = 0;

	while (h)
	{
		if (h->str == NULL)

			printf("[0] (nil)\n");


		else
			printf("[%d] %s\n", h->len, h->str);


		uche++;
		h = h->next;
	}

	return (uche);
}
