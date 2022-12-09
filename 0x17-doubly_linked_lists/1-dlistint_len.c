#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/*
 * Function to return the number of elements in a dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h);
{
	const dlistint_t *current = h;
	size_t count = 0;

/*
 * Loop through the list and count the number of elements
 */
	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	return (count);
}
