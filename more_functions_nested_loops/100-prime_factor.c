#include <stdio.h>
#include "main.h"

/**
 * prime_number - Finds and prints the largest prime factor of the number n
 * @n: Number n
 *
 * Return: Largest prime factor of the number n 
 */
int prime_number(int n)
{
	int factor = 2;

	while (n % factor == 0)
	{
		n = n / factor;
	}

	factor = 3;

	while (factor * factor <= n)
	{
		while (n % factor == 0)
			n = n / factor
		factor = factor + 2;
	}

	if (n > 1)
		return n;
	else
		return factor;
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
