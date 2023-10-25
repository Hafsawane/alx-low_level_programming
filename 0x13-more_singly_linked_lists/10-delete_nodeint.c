#include "lists.h"

/**
 * delete_nodeint_at_index - length of strings
 * Description: find digit
 * @head: int pointer
 * @index: int pointer
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h, *h_pr, *h_h;
	size_t a = 0;

	h_pr = *head;
	if (h_pr == NULL)
		return (-1);
	if (index == 0)
	{
		*head = h_pr->next;
		free(h_pr);
		return (1);
	}
	for (a = 0; a < index; a++)
	{
		if (h_pr == NULL || h_pr->next == NULL)
			return (-1);
		h_h = h_pr;
		h = h_pr->next;
		h_pr = h_pr->next;
	}
	h = h_pr->next;
	free(h_pr);
	h_h->next = h;

	return (1);
}
