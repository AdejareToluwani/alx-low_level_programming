#include "lists.h"

/**
 * print_listint - A function that displays all elements of a lists
 * @h: A linked list of type listint_t
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_val = 0;

	while (h != NULL)
	{
		printf("%d \n ", h->n);
		h = h->next;
		num_val++;
	}

	return (num_val);
}

