#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 */
void print_diagonal(int n)
{
	int i, j;
	int spaces = 0;

	for (i = 0; i < n; i++)
	{
		if (spaces > 0)
			for (j = 0; j < spaces; j++)
				_putchar(' ');
		_putchar('\\');
		spaces++;
	}
	_putchar('\n');
}
