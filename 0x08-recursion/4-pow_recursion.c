#include "main.h"

/**
 * _pow_recursion - returns the the value of x raised to the power of y
 * @x: int 1, the number to be raised
 * @y: int 2, the power
 * Return: the value of x raise to y;
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
