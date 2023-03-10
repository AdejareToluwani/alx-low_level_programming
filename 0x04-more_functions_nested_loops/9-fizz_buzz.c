#include <stdio.h>
/**
 * main - print 1 to 100, except certain multiples
 * multiple of 3 only displays "Fizz" instad of number.
 * multiple of 5 displays "Buzz" instead of number.
 * multiples of 3 and 5 display "FizzBuzz"
 * Return: 0 on Success
 */
int main(void)
{

	int i = 2, j = 1;

	printf("%d", j);

	while (i < 101)
	{

		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", i);
		}
		i++;
	}
	printf("\n");

	return (0);
}
