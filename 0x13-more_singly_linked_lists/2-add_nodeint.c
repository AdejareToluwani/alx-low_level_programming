#include "lists.h"

/**
 * add_nodeint - This  adds a new node at the beginning of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n: The int for the new node to contain.
 *
 * Return: It returns Null if it fails else, the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->next = *head;

	*head = new_n;

	return (new_n);
}
