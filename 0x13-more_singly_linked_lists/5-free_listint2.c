#include "lists.h"

/**
 * free_listint2 - This frees a listint_t list .
 * @head: Pointer to the address of the head listint_t list .
 * Description: head = NULL .
 */

void free_listint2(listint_t **head)
{
	listint_t *var;

	if (head == NULL)
		return;
	while (*head)
	{
		var = (*head)->next;
		free(*head);
		*head = var;
	}

	head = NULL;
}
