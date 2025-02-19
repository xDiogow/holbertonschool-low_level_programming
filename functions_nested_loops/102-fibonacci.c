#include <stdio.h>

/**
 * fibonacci - Calculates F(n)
 * @n: Number to find from
 *
 * Return: suite de fibonacci
 */
int fibonacci(int n)
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
	int n = 50;

	for (i = 0; i <= n; i++)
	{
		int result = fibonacci(i);
		if (i != n)
			printf("%d, ", result);
		else
			printf("%d", result);
	}
	return (0);
}
