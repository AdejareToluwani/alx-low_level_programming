#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: English alphabet excluding q and e
 * Return: 0 (success)
 */
int main(void)
{
	char chars;

	for (chars = 'a'; chars <= 'z'; chars++)
	{
		if (chars == 'e' || chars == 'q')
			continue;
		putchar(chars);
	}
	putchar('\n');

	return (0);
}
