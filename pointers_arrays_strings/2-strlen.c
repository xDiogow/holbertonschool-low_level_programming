#include "main.h"
#include <stdio.h>

/**
 * _strlen - Counts the amount of char
 * @str: String
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}
