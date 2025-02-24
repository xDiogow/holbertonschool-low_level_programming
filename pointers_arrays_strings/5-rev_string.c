#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen - Counts the amount of char
 * @str: String
 * Return: Length of string
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


/**
 * rev_string - Reverse a string
 * @str: String
 * Return: The reversed string
 */
void rev_string(char *str)
{
	int i;
	int index = 0;
	int s_size = _strlen(str);
	char* buffer[50]

	for (i = s_size - 1; i >= 0; i--)
	{
		buffer[index] = str[i];
		index++;
	}
	return buffer;
}

