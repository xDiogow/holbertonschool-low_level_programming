#include <stdio.h>

/**
 * fibonacci - Calculates the suite of fibonacci
 * @n: f(n)
 *
 * Return: The number
 */
long int fibonacci(int n)
{
	long int previouspreviousNumber, previousNumber, currentNumber;
	int i;

	previouspreviousNumber = 0;
	previousNumber = 1;

	for (i = 1; i < n; i++)
	{
		currentNumber = previouspreviousNumber + previousNumber;
		previouspreviousNumber = previousNumber;
		previousNumber = currentNumber;
	}
	return (currentNumber);
}

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int n = 51;

	for (i = 2; i <= n; i++)
	{
		long int result = fibonacci(i);

		if (i != n)
			printf("%ld, ", result);
		else
			printf("%ld", result);
	}
	printf("\n");
	return (0);
}
