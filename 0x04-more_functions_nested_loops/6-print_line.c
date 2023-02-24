
#include "main.h"

/**
 * print_line - print n underscore characters
 * @n: number of times to print _
 */
void print_line(int n)
{
	int set;

	if (n > 0)
	{
		for (set = 0; set < n; set++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

