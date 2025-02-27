#include "main.h"

/**
 * print_number - Prints a integer
 * @n: Number to print
 * Return: recursive
 */
void print_number(int n)
{
	int num;

	if (n < 0)
	{
		_putchar('-');
		num = -(n);
	}
	else
		num = n;

	if (num / 10)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
