#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - Counts double linked list
 * @h: Dlistint
 * Return: Count
 */
size_t dlistint_len(const dlistint_t *h)
{
        size_t count = 0;

        while (h)
        {
                h = h->next;
                count++;
        }
        return (count);
}

