#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Reallocates a string
 * @str: String to be reallocated
 * Return: String
 */
char *_strdup(char *str)
{
	int size = 0, i;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}
