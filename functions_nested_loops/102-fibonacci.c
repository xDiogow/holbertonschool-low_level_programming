#include <stdio.h>

/**
 * fibonacci - Calculates F(n)
 * @n: Number to find from
 *
 * Return: suite de fibonacci

long int fibonacci(int n)
{
	if (n <= 1)
		return (n);
	else
		return (fibonacci(n - 1) + fibonacci(n - 2));
}
*/

long int fibonacci(int n) 
{
	int previouspreviousNumber, previousNumber, currentNumber;
	int i;

	previousNumber = 0;
	currentNumber = 1;

	for (i = 1; i < n; n++)
	{
		previouspreviousNumber = previousNumber;
		previousNumber = currentNumber;
		currentNumber = previouspreviousNumber + previousNumber;
	}
	return currentNumber;
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
