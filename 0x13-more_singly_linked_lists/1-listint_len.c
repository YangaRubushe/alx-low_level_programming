#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t element_count = 0; /* Initialize a counter for elements */

	while (h != NULL)
	{
		element_count++; /* Increment the element counter */
		h = h->next; /* Move to the next node */
	}

	return (element_count); /* Return the total number of elements */
}
