#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	/* Traverse the linked list until the end or the desired index is reached */
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	/* Return the node at the desired index, or NULL if the index is beyond the list */
	return (temp ? temp : NULL);
}

