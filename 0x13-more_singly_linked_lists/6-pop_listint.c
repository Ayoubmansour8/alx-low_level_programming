#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the element that was deleted,
 *         or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	/* Check if the list is empty or the head is NULL */
	if (!head || !*head)
		return (0);

	/* Store the data of the head node in 'num' */
	num = (*head)->n;

	/* Update the head pointer to the next node */
	temp = (*head)->next;
	free(*head);

	/* Update the head pointer to the new head */
	*head = temp;

	/* Return the data of the deleted head node */
	return (num);
}

