#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistint - Sums all the data of a dlistint_t linked list
 * @head: head
 * Return: Sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
