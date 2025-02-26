#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints a integer
 * @n: Number to print
 * Return: recursive
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -((unsigned int)n);
	}
	else
		num = (unsigned int) n;

	if (num / 10)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
