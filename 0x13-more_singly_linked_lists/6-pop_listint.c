#include "lists.h"

/**
 * pop_listint -  function that deletes the head node of a linked list
 * and returns the head node’s data (n).
 * Description: delete the head node
 *
 * @head: pointer type int
 *
 * Return: int
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *h;
	int n;

	if (*head == NULL)
		return (0);

	h = *head;
	*head = h->next;
	n = h->n;
	free(h);
	return (n);
}
