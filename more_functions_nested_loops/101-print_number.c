#include <stdio.h>
#include "main.h"

/**
 * print_number - prints a integer
 * @n: the integer
 */
void print_number(int n)
{
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
