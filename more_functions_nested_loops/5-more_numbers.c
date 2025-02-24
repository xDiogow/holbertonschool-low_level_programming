#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i >= 10)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
