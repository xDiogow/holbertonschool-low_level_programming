#include "main.h"
#include <stdio.h>

/**
 * factorial - calculates the factorial of n recursively
 * @n: N
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
