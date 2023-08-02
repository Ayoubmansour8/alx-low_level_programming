#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	/* Allocate memory for the new node */
	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	/* Set the data and next pointer of the new node */
	new->n = n;
	new->next = NULL;

	/* Insert the new node at the beginning of the list */
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	/* Traverse the list to find the node before the insertion point */
	for (i = 0; temp && i < idx; i++)
	{
		/* If the node before the insertion point is found */
		if (i == idx - 1)
		{
			/* Insert the new node between temp and temp->next */
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	/* If the insertion point is out of bounds, return NULL */
	return (NULL);
}

