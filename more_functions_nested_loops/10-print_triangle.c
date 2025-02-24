#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line.
 * @size: Triangle size
 */
void print_triangle(int size)
{
	int i, j, k;
	int spaces = size - 1;
	
	if (size <= 0)
		_putchar('\n');

	for (i = 0; i <= size; i++)
	{
		for (j = 0; j <= spaces; j++)
		{
			_putchar(' ');
			spaces--;
		}

		for (k = 0; k <= size - spaces; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
