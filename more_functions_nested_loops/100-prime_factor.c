#include <stdio.h>
#include "main.h"

/**
 * prime_number - Finds and prints the largest prime factor of the number n
 * @n: Number n
 * Return: Largest prime factor of the number n
 */
void prime_number(long n)
{
	long factor = 2;

	while (n % factor == 0)
	{
		n = n / factor;
	}

	factor = 3;

	while (factor * factor <= n)
	{
		while (n % factor == 0)
		{
			n = n / factor;
		}
		factor = factor + 2;
	}

	if (n > 1)
		printf("%ld\n", n);
	else
		printf("%ld\n", factor);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	prime_number(612852475143);
	return (0);
}
