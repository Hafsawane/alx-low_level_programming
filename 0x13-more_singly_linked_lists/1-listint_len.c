#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 *
 * Description: return number of elements
 *
 * @h: pointer of type integer
 *
 * Return: size_t
 *
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;
	const listint_t *head;

	head = h;
	while (head != NULL)
	{
		i++;
		head = head->next;
	}

	return (i);
}
