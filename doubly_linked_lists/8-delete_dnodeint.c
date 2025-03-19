#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_dnodeint_at_index - Deletes a node at index
 * @head: Head to the list
 * @index: Position of the node to be deleted:
 * Return: 1 if success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (-1);

	if (temp->prev)
		temp->prev->next = temp->next;

	if (temp->next)
		temp->next->prev = temp->prev;

	free(temp);

	return (1);
}
