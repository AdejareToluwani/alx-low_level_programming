#include "main.h"

/**
 * _puts - Thos function  prints a string, followed by a new line
 * @str: this is my input sting
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
