#include "main.h"

/**
 * print_number - Prints a integer
 * @n: Number to print
 * Return: recursive
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');

		if (n == -2147483648)
		{
			print_number(214748364);
			_putchar('8');
			return;
		}
		n = -(n);
	}

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
