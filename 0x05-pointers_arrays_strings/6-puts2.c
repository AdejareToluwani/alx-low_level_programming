#include "main.h"

/**
 * puts2 - prints every charcter of a string
 * @str: the string to be worked on
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;

	len = len - 1;

	for (; i <= len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
