#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string, in reverse
 * @str: String
 */
void print_rev(char *str)
{
	int i;
	int s_size = _strlen(str);

	for (i = s_size - 1; i >= 0; i--)
		_putchar(str[i]);
	_putchar('\n');
}
