#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array
 * @size: Size of the array
 * @c: Char to fill the array
 * Return: ptr if Success, NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
