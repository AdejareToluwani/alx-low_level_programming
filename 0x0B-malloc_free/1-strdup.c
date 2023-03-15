#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter or argument.
 * @str:String to be copied
 *
 * Return: NULL in case of error, pointer to allocated
 * space
 */

char *_strdup(char *str)
{
	char *c_var;
	int index, len;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	c_var = malloc(sizeof(char) * (len + 1));

	if (c_var == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		c_var[index] = str[index];
	}

	c_var[len] = '\0';

	return (c_var);
}
