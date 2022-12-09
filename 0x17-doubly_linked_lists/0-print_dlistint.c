#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/*
* Function to print all the elements of a dlistint_t list
* and return the number of elements in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

/*
 * Loop through the list and print each element
*/
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}
