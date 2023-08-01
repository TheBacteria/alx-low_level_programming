#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 * of a listint_t linked list
 *
 * @head: pointer to the first node
 *
 * Return: the head node’s data "n"
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
