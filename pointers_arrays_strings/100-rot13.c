#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using rot13
 * @str: input
 * Return: pointer to str
 */
char *rot13(char *str)
{
	int i = 0, j = 0;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[]   = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	
	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		       if (str[j] == letters[j])
			       str[j] = rot13[j];
	}
	return (str);
}
