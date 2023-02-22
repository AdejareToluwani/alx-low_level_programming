#include "main.h"

/**
 * times_table - 9 multiplication table
 *
 * Retun: void
 *
 */
void times_table(void)
{
	int i, mult, prod_output;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');


			prod_output = num * mult;

			if (prod_output <= 9)
				_putchar(' ');
			else
				_putchar((prod_output / 10) + '0');

			_putchar((prod_output % 10) + '0');
		}
		_putchar('\n');
	}
}
