#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position
 *
 * Description: insert a new node
 *
 * @head: pointer type int
 *
 * @idx: pointer type int
 *
 * @n: pointer type int
 *
 * Return: int
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h, *p;
	size_t a = 0;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
		return (NULL);

	h->n = n;
	p = *head;
	if (idx == 0)
	{
		h->next = p;
		*head = h;
		return (h);
	}
	for (a = 1; a < idx; a++)
	{
		if (p == NULL || p->next == NULL)
			return (NULL);
		p = p->next;
	}
	h->next = p->next;
	p->next = h;
	return (h);
}
