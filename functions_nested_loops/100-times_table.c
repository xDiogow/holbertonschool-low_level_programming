#include "main.h"
#include <stdio.h>

/**
 * print_spaces - Function that print spaces.
 * @n: Amount of spaces
 */
void print_spaces(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(' ');
	}
}

/**
 * print_times_table - ~Function that prints the times table of n.
 * @n: table number
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (j == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');

				if (result < 10)
				{
					print_spaces(3);
				}
				else if (result < 100)
				{
					print_spaces(2);
				}
				else if (result < 1000)
				{
					print_spaces(1);
				}

				if (result >= 100)
					_putchar((result / 100) + '0');
				if (result >= 10)
					_putchar(((result / 10) % 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
