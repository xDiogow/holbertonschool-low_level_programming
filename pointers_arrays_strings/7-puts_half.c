#include "main.h"
#include <stdio.h>

void puts_half(char *str)
{
	int i;
	s_size = strlen(str);
	n = (s_size - 1) / 2;

	for (i = 0; i != s_size; i++)
	{
		if (i >= 2)
			_putchar(str[i]);
	}
}
