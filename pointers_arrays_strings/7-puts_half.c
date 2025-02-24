#include "main.h"
#include <stdio.h>
#include <string.h>

void puts_half(char *str)
{
	int i;
	int s_size = strlen(str);
	int n = (s_size - 1) / 2;

	for (i = 0; i != s_size; i++)
	{
		if (i >= n)
			_putchar(str[i]);
	}
}
