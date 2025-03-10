#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Just like malloc but initializes to 0
 * @nmemb: Number of elements
 * @size: Size of a element
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned char *temp;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	temp = (unsigned char *) ptr;

	for (i = 0; i < nmemb; i++)
	{
		temp[i] = 0;
	}

	return (ptr);
}
