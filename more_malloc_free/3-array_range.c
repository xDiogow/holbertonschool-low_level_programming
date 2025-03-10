#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: Min
 * @max: Max
 * Return: ptr
 */
int *array_range(int min, int max)
{
	int* ptr;
	int i, j = 0;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * max);
	if (ptr == NULL)
		return (NULL);

	for (i = min; i < max; i++)
	{
		ptr[j] = i;
		j++;
	}

	return (ptr);
}
