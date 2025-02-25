#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using rot13
 * @str: input
 * Return: pointer to str
 */
char *rot13(char *str)
{
	int i = 0, diff;

	while (str[i] != '\0')
	{
		if ((str[i] < 'a' && str[i] > 'z') || (str[i] < 'A' && str[i] > 'Z'))
		{
			i++;
			continue;
		}

		if (str[i] > 'a' && str[i] < 'z')
		{
			if (str[i] <= 'z')
				str[i] = str[i] + 13;
			else
			{
				diff = 122 - str[i];
				str[i] = 97 + 13 - diff;
			}
		}
	}
	return (str);
}
