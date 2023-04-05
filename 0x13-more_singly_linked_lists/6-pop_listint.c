#include "lists.h"

/**
 * pop_listint - This deletes the head node of a listint_t list .
 * @head: pointer to the address of the head via listint_t list .
 * Return: if the linked list is empty return zero else,
 *     the head node data (n) .
 */

int pop_listint(listint_t  **head)
{
	listint_t *var_p;
	int var;

	if (*head == NULL)
		return (0);
	var_p = *head;
	var = ((*head)->n);
	*head = ((*head)->next);

	free(var_p);
	return (var);

}
