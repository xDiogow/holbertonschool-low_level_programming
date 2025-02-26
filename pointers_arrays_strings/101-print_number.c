#include "main.h"
#include <stdio.h>

void print_number(int n)
{
	int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;

	if (num / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
