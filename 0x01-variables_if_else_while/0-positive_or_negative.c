#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry
 * Return: if  0==> (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* check using the conditional statement */
	if (n > O)
		printf("%d is a positve\n", n);
	else if (n == 0)
		printf("%d is zer0\n", n);
	else
		printf("%d is a negative\n", n);

	return (0);

}
