#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 *               and returns the head node's data (n).
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: The data (n) of the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data = 0;

	if (*head != NULL)
	{
		listint_t *temp = *head; /* Save the current head */

		data = temp->n; /* Get the data (n) of the current head */
		*head = (*head)->next; /* Move the head to the next node */
		free(temp); /* Free the original head node */
	}

	return (data);
}
