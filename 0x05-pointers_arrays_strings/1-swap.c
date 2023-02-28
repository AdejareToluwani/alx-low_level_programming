#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: int 1
 * @b: int 2
 */
void swap_int(int *a, int *b)
{
	int v_store;

	v_store = *a;
	*a = *b;
	*b = v_store;
}
