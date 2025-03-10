#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)
{
	int size, i;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (*str != '\0')
	{
		size++;
		str++;
	}

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}
