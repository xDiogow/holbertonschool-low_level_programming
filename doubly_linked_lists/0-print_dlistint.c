#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_dlistint - Prints double linked list
 * @h: Dlistint
 * Return: Count
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
