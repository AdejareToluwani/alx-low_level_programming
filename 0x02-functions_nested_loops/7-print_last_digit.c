#include "main.h"

/**
 * print_last_digit - display the last digit of an int
 *
 * @n: the arg i have in my parmeter
 *
 * Return: the last digit of n
 *
 */
int print_last_digit(int n)
{
	int num;

	if (n < 0)
		num = -1 * (n % 10);
	else
		num = n % 10;
	_putchar((num % 10) + '0');
	return (num % 10);
}
