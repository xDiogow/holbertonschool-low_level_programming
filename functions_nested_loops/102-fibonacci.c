#include <stdio.h>

/**
 * fibonacci - Calculates F(n)
 * @n: Number to find from
 *
 * Return: suite de fibonacci
 */
long long int fibonacci(int n)
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
long long int main(void)
{
	int i;
	int n = 51;

	for (i = 1; i <= n; i++)
	{
		long long int result = fibonacci(i);
		if (i != n)
			printf("%lld, ", result);
		else
			printf("%lld", result);
	}
	printf("\n");
	return (0);
}
