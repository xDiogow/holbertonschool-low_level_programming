#include "main.h"
#include <stdio.h>

int _strlen(char* str)
{
	int len = 0;

	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}
