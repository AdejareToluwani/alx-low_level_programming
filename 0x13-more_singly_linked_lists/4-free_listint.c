#include "lists.h"
/**
 *  free_listint - A function that frees a listint_t list .
 *  @head: The pointer to the head of listint_t list .
 *
 */

void free_listint(listint_t *head)
{
	listint_t *var;

	while (head)
	{
		var = head->next;
		free(head);
		head = var;
	}
}
