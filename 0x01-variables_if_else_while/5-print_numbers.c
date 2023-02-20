#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: single numbers of  base 10 digits
 *
 * Return: 0 (success)
 */
int main(void)
{
	int num = 0;

	do {
		printf("%d", num);
		num++;
	} while (num < 10);

	printf("\n");

	return (0);
}
