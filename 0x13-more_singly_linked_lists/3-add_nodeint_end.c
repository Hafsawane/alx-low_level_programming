#include "lists.h"

/**
 * add_nodeint_end - function that  adds a new node at the end of a list
 *
 * Description: add new node
 *
 * @head: int pointer
 *
 * @n: int pointer
 *
 * Return: listint_t
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h, *p;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
		return (NULL);

	h->n = n;
	h->next = NULL;

	p = *head;
	if (p == NULL)
		*head = h;
	else
	{
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = h;
	}
	return (h);
}
