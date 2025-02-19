#include <stdio.h>

/**
 * fibonacci - Calculates the fibonacci sequence
 * @n: Number
 *
 * Return: the result
 */
int fibonacci(int n)
{
	if (n <= 1)
		return n;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

/**
 * main - Entry point
 * 
 * Return: Always 0
 */
int main()
{
	int max_iter = 33;
	int sum = 0;
	int i, result;

	for (i = 0; i <= max_iter; i++)
	{
		result = fibonacci(i);
		if (result % 2 == 0)
			sum += result;
	}
	printf("%d", sum);

	return (0);
}
