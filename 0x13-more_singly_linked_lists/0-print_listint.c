#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 *
 * Description: printd elements
 *
 * @h: pointer that points for an integer
 *
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *head;

	head = h;
	while (head != NULL)
	{
		printf("%i\n", head->n);
		i++;
		head = head->next;
	}

	return (i);
}
