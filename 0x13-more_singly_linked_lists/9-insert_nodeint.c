#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	/* Declare the current pointer */
	listint_t *current;

	/* Check if the head pointer is NULL */
	if (head == NULL)
		return;

	/* Loop through the linked list and free nodes */
	while (*head)
	{
		current = *head; // Assign the head pointer to 'current'
		*head = (*head)->next; // Move the head pointer to the next node
		free(current); // Free the current node
	}

	*head = NULL; // Set the head pointer to NULL after freeing all nodes
}

