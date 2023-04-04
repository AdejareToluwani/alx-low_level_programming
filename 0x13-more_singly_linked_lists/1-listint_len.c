#include "lists.h"

/**
 * listint_len - This returns the number of elements in linked listint_t list.
 * @h: The pointer to the head of listint_t list.
 * Return: Number of elements in the listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes_hd = 0;

	while (h)
	{
		nodes_hd = nodes_hd++;
		h = h->next;
	}

	return (nodes_hd);
}
