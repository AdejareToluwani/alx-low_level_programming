#include "lists.h"

/**
 * get_nodeint_at_index - This return the nth note of listint_t linked list .
 * @head: The pointer to the head of listint_t list .
 * @index: index of the node starting at 0 .
 * Return: Return Null if the node does not exist .
 *     Else, the located node .
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int set_node;

	for (set_node = 0; set_node < index; set_node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;

	}

	return (head);

}
