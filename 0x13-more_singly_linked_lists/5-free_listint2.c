#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL) // If the head pointer is NULL, return
		return;

	while (*head)
	{
		temp = (*head)->next; // Store the next node in 'temp'
		free(*head); // Free the current node
		*head = temp; // Move the head pointer to the next node
	}

	*head = NULL; // Set the head pointer to NULL after freeing all nodes
	// Now, the linked list has been successfully freed
}

