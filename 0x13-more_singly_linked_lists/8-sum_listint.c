#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n).
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of all the data (n) of the linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0; /* Initialize the sum to 0 */
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next; /* Move to the next node */
	}

	return (sum); /* Return the sum of all the (n) of the linked list */
}
