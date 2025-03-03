#include "main.h"
#include <stdio.h>

int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}

int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return guess;
	if (guess * guess > n)
		return guess;
	return (sqrt_helper(n, guess + 1));
}
