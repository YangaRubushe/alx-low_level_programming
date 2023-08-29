#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The value to set in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current;

	new_node = malloc(sizeof(listint_t)); /* Allocate memory for the new node */

	if (new_node == NULL)
		return (NULL); /* Return NULL if memory allocation failed */

	new_node->n = n; /* Set the value of the new node */
	new_node->next = NULL; /* The new node will be the last, so set next to NULL */

	if (*head == NULL)
	{
		*head = new_node; /* If the list is empty, the new node is the head */
	}

	else
	{
		current = *head;

		while (current->next != NULL)
		{
			current = current->next; /* Traverse the list to find the last node */
		}

		current->next = new_node; /* Set the next pointer of the last node to the new node */
	}

	return (new_node); /* Return the address of the new element */
}
