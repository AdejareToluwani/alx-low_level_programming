#include "lists.h"

/**
 * insert_nodeint_at_index - This inserts a new node to listint_t
 *    list via given position .
 * @head: The pointer to the adress of the head listint_t list .
 * @idx: The index(listint_t) where new node will be added .
 * @n: int for the new node .
 *
 * Return: Null if function fails. else, adddress of the new node .
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *s_new, *s_cp = *head;
	unsigned int  s_node;

	s_new = malloc(sizeof(listint_t));
	if (s_new == NULL)
		return (NULL);
	s_new->n = n;

	if (idx == 0)
	{
		s_new->next = s_cp;
		*head = s_new;
		return (s_new);
	}

	for (s_node = 0; s_node < (idx - 1); s_node++)
	{
		if (s_cp == NULL || s_cp->next == NULL)
			return (NULL);
		s_cp = s_cp->next;
	}

	s_new->next = s_cp->next;
	s_cp->next = s_new;

	return (s_new);

}
