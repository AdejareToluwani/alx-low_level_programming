#include "lists.h"
/**
 * sum_listint - This returns the sum of data (n) of a linkint_t list .
 * @head: Pointer to the head of listint_t list .
 * Return: if empty 0 else, the sum of all the data .
 */

int sum_listint(listint_t *head)
{
	int sum_data = 0;

	while (head)
	{
		sum_data += head->n;
		head = head->next;
	}

	return (sum_data);

}

