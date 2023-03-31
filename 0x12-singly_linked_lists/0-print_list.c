#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list -This program prints all the elements of a list_t list
 * @h:The  pointr to the head list
 * Return: i
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("[%u] ", h->len);

		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		i++;
	}
	return (i);
}
