#include "main.h"
#include <stdio.h>

char *_memset(char *str, char byte, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
		str[i] = byte;
	return (str);
}
