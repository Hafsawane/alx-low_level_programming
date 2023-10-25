#include "lists.h"

/**
 * free_listint2 - function that frees a list
 *
 * Description: free a list
 *
 * @head: pointer type int
 *
 * Return: listint_t
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *h;

	if (head == NULL)
		return;

	h = *head;
	while (h != NULL)
	{
		*head = h->next;
		free(h);
		h = *head;
	}
	head = NULL;
}
