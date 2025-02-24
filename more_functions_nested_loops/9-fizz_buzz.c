#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - I don't have much to say
 */
void fizz_buzz()
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
}

/**
 * main - Entry point
 */
int main()
{
	fizz_buzz();
	return (0);
}
