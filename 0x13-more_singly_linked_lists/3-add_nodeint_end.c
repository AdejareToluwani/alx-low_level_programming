#include "lists.h"

/**
 * add_nodeint_end - This adds a new node at the end of the listint_t.
 * @head: A pointer to the address via head of listint_t list.
 * @n: The int the new node is going to contain.
 *
 * Return: if the function fails => Null.
 * else, the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n, *end;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
		*head = new_n;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new_n;
	}

	return (*head);

}

