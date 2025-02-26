#include "main.h"
#include <stdio.h>

void print_number(int n)
{
	if (n < 10)
	{
		_putchar(n + '0');
		return;
	}
	print_number(n / 10);
	_putchar((n % 10) + '0');
}
