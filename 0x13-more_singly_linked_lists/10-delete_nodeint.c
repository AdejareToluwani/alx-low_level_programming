#include "lists.h"
/**
 * delete_nodeint_at_index - This deletes the node at index of listint_t list .
 * @head: The pointer to the address of the head via listint_t list .
 * @index: index of the node to be deleted .
 * Return: 1 if success else -1 if failed .
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *s_var, *s_cp = *head;
	unsigned int s_node;

	if (s_cp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = ((*head)->next);
		free(s_cp);
		return (1);
	}

	for (s_node = 0; s_node < (index - 1); s_node++)
	{
		if (s_cp->next ==  NULL)
			return (-1);
		s_cp = s_cp->next;
	}

	s_var = s_cp->next;
	s_cp->next = s_var->next;
	free(s_var);
	return (1);

}
