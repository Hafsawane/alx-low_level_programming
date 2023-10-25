#include "lists.h"

/**
 * free_listint - function that frees a list
 *
 * Description: free a list
 *
 * @head: pointer type int
 *
 * Return: listint_t
 */

void free_listint(listint_t *head)
{
	listint_t *h;

	h = head;
	while (h != NULL)
	{
		head = h->next;
		free(h);
		h = head;
	}

}
