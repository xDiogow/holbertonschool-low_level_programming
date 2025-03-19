#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (head)
	{
		if (i == idx)
		{
			if (head->prev)
				new_node->prev = head->prev;
			new_node->next = head;
		}
	}

	return (new_node);
}
