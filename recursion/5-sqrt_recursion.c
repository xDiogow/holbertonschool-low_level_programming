#include "main.h"
#include <stdio.h>

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 0));
}

int _sqrt_helper(int n, int guess)
{
	if (guess * guess > n)
		return (-1);

	if (guess * guess == n)
		return guess;
	
	return (_sqrt_helper(n, guess + 1));
}
