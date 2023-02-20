#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints numbers in pairs
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 10; n++)
		{
			if (i == n || i > n)
				continue;

			putchar(i + '0');
			putchar(n + '0');

			if (i == 8 && n == 9)
				break;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
