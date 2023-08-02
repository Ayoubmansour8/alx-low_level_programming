#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *current;

	if (*head == NULL) // If the list is empty
		return (-1);

	if (index == 0) // If the node to be deleted is the first node
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	// Traverse to the node just before the one to be deleted
	temp = *head;
	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}

	// Perform the deletion
	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}

