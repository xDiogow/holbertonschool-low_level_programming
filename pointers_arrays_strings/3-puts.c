#include "main.h"
#include <stdio.h>

void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
