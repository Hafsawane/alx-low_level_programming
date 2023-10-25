#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 *
 * Description: nth node
 *
 * @head: pointer type int
 *
 * @index: pointer type int
 *
 * Return: int
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h;
	unsigned int a = 0;

	h = head;
	while (a < index && h->next != NULL)
	{
		head = h->next;
		a++;
		h = head;
	}
	if (a < index)
		return (NULL);
	return (h);
}
