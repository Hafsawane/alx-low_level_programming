#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data of a list
 *
 * Description: return sum
 *
 * @head: pointer type int
 *
 * Return: int
 *
 */

int sum_listint(listint_t *head)
{
	int n = 0;

	if (head == NULL)
		return (0);

	while (head->next != NULL)
	{
		n += head->n;
		head = head->next;
	}
	n += head->n;
	return (n);
}
