#include <stdio.h>

/**
 * fibonacci - Calculates F(n)
 * @n: Number to find from
 *
 * Return: suite de fibonacci
 */
long int fibonacci(int n)
{
	if (n <= 1)
		return n;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
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
