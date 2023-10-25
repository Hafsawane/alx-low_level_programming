#include "lists.h"

/**
 * reverse_listint -  function that reverses a list
 *
 * Description: reverse a list
 *
 * @head: pointer type int
 *
 * Return: int
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev;
	listint_t *n;

	rev = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = n;
	}

	*head = rev;
	return (*head);
}
