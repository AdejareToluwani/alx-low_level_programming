#include "main.h"
#include <ctype.h>

/**
 * _isupper - this checks if an input char is uppercase or not.
 * @c: test val
 * Return: 1 ==> success, 0 ==> failure
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);

}
