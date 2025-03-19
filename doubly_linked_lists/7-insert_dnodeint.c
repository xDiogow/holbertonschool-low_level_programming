#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (*h != NULL)
	{
		if (i == idx)
		{
			if ((*h)->prev)
				new_node->prev = (*h)->prev;
			new_node->next = (*h);
		}
		(*h) = (*h)->next;
	}

	return (new_node);
}
