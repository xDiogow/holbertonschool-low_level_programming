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
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		for (j = 0; j < 54; j++)
			if (str[i] == letters[j])
				str[i] = rot13[j];
		i++;
	}
	return (str);
}
