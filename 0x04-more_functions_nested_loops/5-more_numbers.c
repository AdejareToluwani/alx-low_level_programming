#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints numbers to 14
 *
 * Return: returns nothing
 */

void more_numbers(void)
{
	int num_1, num_2;

	for (num_1 = 0; num_1 < 10; num_1++)
	{
		for (num_2 = 0; num_2 <= 14; num_2++)
		{
			if (num_2 > 9)
			{
				putchar((num_2 / 10) + '0');
			}
			putchar((num_2 % 10) + '0');
		}
		putchar(10);
	}
}
