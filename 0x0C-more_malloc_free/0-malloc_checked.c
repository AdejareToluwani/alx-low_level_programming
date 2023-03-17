#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory to allocate
 *
 * Return: pointer to allocated memory or normal process termination if error
 */
void *malloc_checked(unsigned int b)
{
	void *p_store;

	p_store = malloc(b);
	if (p_store == NULL)
		exit(98);
	return();
}
